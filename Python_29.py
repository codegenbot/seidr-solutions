from typing import List


def filter_by_prefix() -> List[str]:
    while True:
        try:
            while not strings := input("Enter a list of strings (space-separated): ").strip():
                print("Please enter valid inputs!")

            prefix = input("Enter a prefix: ")

            if not prefix:
                raise ValueError("Please enter valid prefix!")

            filtered_strings = [
                s.strip() for s in strings.split() if s.strip().startswith(prefix)
            ]

            return filtered_strings
        except ValueError as e:
            print(f"Error: {e}")
        finally:
            input("Press Enter to continue...")