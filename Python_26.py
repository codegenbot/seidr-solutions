from typing import List


def remove_duplicates(input_list: str) -> None:
    while True:
        user_input = input(
            f"Enter a list of numbers separated by space or comma (default is {input_list}): "
        )

        if not user_input:
            user_input = input_list
            break

        try:
            numbers = list(map(int, user_input.replace(",", " ").split()))
            break
        except ValueError:
            print("Invalid input. Please enter valid integers.")

    unique_numbers = sorted(set(map(str, numbers)))
    print(f"Unique numbers in the given list: {unique_numbers}")