def filter_by_prefix(prefix: str = '') -> None:
    while True:
        try:
            prefix_input = input("Enter prefix: ")
            strings = input(f"Enter strings (comma-separated): ").split(",")

            filtered_strings = [s.strip() for s in strings if len(strings) > 1 and s.strip().startswith(prefix_input)]

            print(filtered_strings)
            break
        except ValueError as e:
            print(f"Error occurred: {e}")