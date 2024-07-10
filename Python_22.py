import re


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
        user_values = [int(val) for val in user_input.split(",")]

        if len(user_values) > 0:
            avg_value = sum(user_values) / len(user_values)
            min_value = min(user_values)

            print(f"The integers from the input are: {user_values}")
            print(f"Average Value: {avg_value}")
            print(f"Minimum Value: {min_value}")
        else:
            print("No values entered. Cannot calculate average and minimum.")
    except (ValueError, ZeroDivisionError):
        print("Invalid input. Please enter a valid list of comma-separated integers.")


filter_integers()