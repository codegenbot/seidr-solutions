def filter_integers() -> None:
    while True:
        print("Please enter a comma-separated list of values (separated by commas):")
        user_input = input()

        try:
            user_values = [
                int(val) for val in filter(lambda x: x != "", user_input.split(","))
            ]
            break
        except ValueError:
            print(
                "Invalid input. Please enter a valid list of comma-separated integers."
            )

    if not user_values:
        print("No values entered. Cannot calculate average and minimum.")
    else:
        avg_value = sum(user_values) / len(user_values)
        min_value = min(user_values)

        print(f"The integers from the input are: {user_values}")
        print(f"Average Value: {avg_value:.2f}")
        print(f"Minimum Value: {min_value}")


filter_integers()