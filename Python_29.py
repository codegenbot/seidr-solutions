from typing import List


def filter_by_prefix():
    try:
        user_input = input("Enter strings (comma-separated): ")
        strings = [s.strip() for s in user_input.split(",")]
        prefix = input("Enter prefix: ")

        if not strings or not prefix:
            print("Please provide valid inputs")
            return

        filtered_strings = [
            s.strip()
            for s in strings
            if len(s) > 0 and s.startswith(prefix)
        ]

        print(filtered_strings)
    except ValueError as e:
        print(f"Error occurred: {e}")


filter_by_prefix()