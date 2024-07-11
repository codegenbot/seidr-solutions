def filter_by_prefix() -> None:
    while True:
        try:
            strings = input("Enter strings (comma-separated): ").split(",")
            prefix = input("Enter prefix: ")

            filtered_strings = [
                s.strip().lower()
                for s in strings
                if len(strings) > 1 and s.strip().lower().startswith(prefix.lower())
            ]

            print(filtered_strings)
            break
        except ValueError as e:
            print(f"Error occurred: {e}")
            continue


filter_by_prefix()