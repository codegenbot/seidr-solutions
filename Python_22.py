from typing import List


def filter_integers(values: List) -> None:
    print("Please enter a comma-separated list of values (separated by commas):")
    user_input = input()

    try:
        user_values = [val.strip() for val in user_input.split(",")]

        filtered_values = []
        for value in user_values:
            if value.isdigit():
                filtered_values.append(int(value))
            else:
                filtered_values.append(value)

        print("The integers from the input are:", filtered_values)
    except ValueError:
        print("Invalid input. Please enter a valid list of comma-separated values.")


filter_integers([])