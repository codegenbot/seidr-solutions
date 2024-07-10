import re
from functools import lru_cache


def filter_integers() -> None:
    while True:
        print("Please enter a comma-separated list of values (separated by commas):")
        user_input = input()

        if not re.match(r"^[0-9]+(,[0-9]+)*$", user_input):
            print(
                "Invalid input. Please enter a valid list of comma-separated integers."
            )
        else:
            break

    try:
        user_values = [
            int(val) for val in filter(lambda x: x != "", user_input.split(","))
        ]

        if len(user_values) > 0:
            avg_value = sum(user_values) / len(user_values)
            min_value = min(user_values)

            print(f"The integers from the input are: {user_values}")
            print(f"Average Value: {avg_value:.2f}")
            print(f"Minimum Value: {min_value:.0f}")
        else:
            print("No values entered. Cannot calculate average and minimum.")
    except (ValueError, ZeroDivisionError):
        if "divided by zero" in str(e):
            print(
                "Please enter at least one valid integer value to calculate the average."
            )
        elif str(e) == "'NoneType' object has no attribute 'split'":
            print(
                "Invalid input. Please enter a valid list of comma-separated integers."
            )
        else:
            print("Invalid input. Please try again.")


filter_integers()