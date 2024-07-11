def filter_by_prefix() -> None:
    while True:
        try:
            strings = input("Enter strings (comma-separated): ").split(",")
            prefix_input = input("Enter prefix: ")

            filtered_strings = [s.strip() for s in strings if len(strings) > 1 and s.strip().startswith(prefix_input)]

            print(filtered_strings)
            break
        except ValueError as e:
            print(f"Error occurred: {e}")