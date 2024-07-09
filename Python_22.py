from typing import List


def filter_integers() -> List[int]:
    values = []
    while True:
        user_input = input("Enter a list of values (or 'stop' to finish): ")
        if user_input.lower() == "stop":
            break
        try:
            values += [int(x) for x in user_input.split()]
        except ValueError:
            print("Invalid input. Please enter only integers separated by spaces.")
    return [value for value in set(values) if isinstance(value, int)]