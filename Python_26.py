from typing import List


def remove_duplicates(input_type: str) -> None:
    while True:
        user_input = input(
            f"Enter the list of numbers separated by space or comma ({input_type}): "
        )

        try:
            if input_type == "comma":
                numbers = list(map(int, user_input.replace(",", " ").split()))
            else:
                numbers = list(map(int, user_input.split()))
            break
        except ValueError:
            print("Invalid input. Please enter valid integers.")

    unique_numbers = sorted(set(map(str, numbers)))
    print("Unique numbers:", unique_numbers)