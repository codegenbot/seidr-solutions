import re


def filter_integers() -> None:
    while True:
        print("Please enter a comma-separated list of values (separated by commas):")
        user_input = input()

        if not user_input:
            print("Please enter some values. You can press Enter to exit.")
        elif not re.match(r"^[0-9]+(,[0-9]+)*$", user_input):
            print(
                "Invalid input. Please enter a valid list of comma-separated integers."
            )
        else:
            break

    try:
        user_values = [
            int(val)
            for val in filter(lambda x: len(x.strip()) > 0, user_input.split(","))
        ]

        if not user_values:
            print("No values entered. Cannot calculate average and minimum.")
        elif len(user_values) == 1:
            print(f"The integers from the input are: {user_values}")
            print(f"Minimum Value: {user_values[0]}")
        else:
            avg_value = sum(user_values) / len(user_values)
            min_value = min(user_values)

            print(f"The integers from the input are: {user_values}")
            print(f"Average Value: {avg_value:.2f}")
            print(f"Minimum Value: {min_value}")
    except (ValueError, ZeroDivisionError):
        print("Invalid input. Please enter a valid list of comma-separated integers.")