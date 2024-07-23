from typing import List


def filter_by_prefix() -> List[str]:
    while True:
        try:
            user_strings = input("Enter a list of strings (space-separated): ")
            prefix = input("Enter a prefix: ")

            if not user_strings or not prefix:
                raise ValueError("Please enter valid inputs!")

            filtered_strings = [
                s.strip() for s in user_strings.split() if s.strip().startswith(prefix)
            ]

            return filtered_strings
        except ValueError as e:
            print(f"Error: {e}")

        input("Press Enter to continue...")