from typing import List


def remove_duplicates(numbers: List[str]) -> List[int]:
    user_input = input("Enter the list of numbers separated by space or comma: ")

    while True:
        try:
            numbers = list(map(int, user_input.replace(",", " ").split()))
            break
        except ValueError:
            user_input = input(
                "Invalid input. Please enter the list of numbers again: "
            )

    return sorted(list(set(map(str, numbers))))