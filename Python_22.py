from typing import List


def filter_integers() -> List[int]:
    values = []
    while True:
        user_input = input("Enter an integer or type 'done' to finish: ")
        if user_input.lower() == "done":
            break
        try:
            value = int(user_input)
            values.append(value)
        except ValueError:
            print("Invalid input. Please enter an integer or 'done'.")
    even_numbers = [i for i in values if i % 2 == 0]
    return even_numbers


print(filter_integers())