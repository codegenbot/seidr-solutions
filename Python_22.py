import re


def filter_integers() -> None:
    while True:
        print("Please enter a comma-separated list of values (separated by commas):")
        user_input = input()

        if not re.match(r"^[0-9]+(,[0-9]+)*$", user_input):
            print(
                "Invalid input. Please enter a valid list of comma-separated integers."
            )
            continue

        try:
            user_values = [int(val) for val in user_input.split(",")]

            print("The integers from the input are:", user_values)
            break
        except ValueError:
            print(
                "Invalid input. Please enter a valid list of comma-separated integers."
            )


filter_integers()