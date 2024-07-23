from typing import List


def remove_duplicates(numbers: List[str]) -> List[int]:
    user_input = input("Enter the list of numbers separated by space or comma: ")

    try:
        numbers = list(map(int, user_input.replace(",", " ").split()))
    except ValueError:
        print(
            "Invalid input. Please enter a list of numbers separated by space or comma."
        )
        return []

    unique_numbers = sorted(list(set(numbers)))

    while True:
        action = input(
            f"The list without duplicates: {unique_numbers}. Do you want to (R)eplace, (A)dd or (E)xit? "
        )

        if action.upper() in ["R", "A", "E"]:
            break
        else:
            print(
                "Invalid action. Please enter R for replace, A for add, or E for exit."
            )

    if action.upper() == "E":
        return []
    elif action.upper() == "R":
        return unique_numbers
    else:
        user_input = input(
            "Enter the new list of numbers separated by space or comma: "
        )

        try:
            numbers = list(map(int, user_input.replace(",", " ").split()))
        except ValueError:
            print(
                "Invalid input. Please enter a list of numbers separated by space or comma."
            )
            return []

        unique_numbers = sorted(list(set(numbers)))
        return unique_numbers