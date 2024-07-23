from typing import List


def remove_duplicates() -> None:
    while True:
        user_input = input("Enter the list of numbers separated by space or comma: ")

        try:
            numbers = list(map(int, user_input.replace(",", " ").split()))
            break
        except ValueError:
            print("Invalid input. Please enter valid integers.")

    unique_numbers = sorted(set(map(str, numbers)))
    print("Unique numbers:", unique_numbers)