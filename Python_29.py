```
def filter_by_prefix() -> None:
    while True:
        try:
            strings = input("Enter strings (comma-separated): ").split(",")
            prefix = input("Enter prefix: ")

            if not prefix.strip():  
                print("Prefix cannot be empty.")
                continue

            filtered_strings = [
                s.strip()
                for s in strings
                if len(strings) > 1 and s.strip().startswith(prefix)
            ]

            print(filtered_strings)
            break
        except ValueError as e:
            print(f"Error occurred: {e}")

filter_by_prefix()