import re


def filter_integers(input_str=None) -> None:
    while True:
        if input_str is None:
            print(
                "Please enter a comma-separated list of values (separated by commas):"
            )
            input_str = input()

        if not input_str and "exit" in input_str.lower():
            break
        elif not input_str:
            print("Please enter some values. You can press Enter to exit.")
        elif not re.match(r"^[0-9]+(,[0-9]+)*$", input_str):
            print(
                "Invalid input. Please enter a valid list of comma-separated integers."
            )
        else:
            break

    try:
        user_values = [
            int(val.replace(" ", "").strip())
            for val in input_str.split(",")
            if re.match(r"^\d+$", val.replace(" ", "")) or int(val) == 0
        ]

        if not user_values:
            print("No values entered. Cannot calculate average and minimum.")
        elif len(user_values) < 2:
            print(f"The integers from the input are: {user_values}")
            if len(user_values) > 1:
                print("Average Value is Not Applicable")
            else:
                print(f"Minimum Value: {user_values[0]}")
        else:
            avg_value = sum(user_values) / len(user_values)
            min_value = min(user_values)

            print(f"The integers from the input are: {user_values}")
            if len(user_values) == 1:
                print("Average Value is Not Applicable")
            else:
                print(f"Average Value: {avg_value:.2f}")
            print(f"Minimum Value: {min_value}")
    except ZeroDivisionError:
        print("Invalid input. Please enter a valid list of comma-separated integers.")


filter_integers()