from typing import List


def filter_by_prefix() -> List[str]:
    while True:
        try:
            user_input = input("Enter a list of strings (space-separated): ")
            if not user_input:
                raise ValueError("Please enter some strings!")
            strings = [s.strip() for s in user_input.split()]

            prefix = input("Enter a prefix: ")

            filtered_strings = [s for s in strings if s.startswith(prefix)]
            return filtered_strings
        except ValueError as e:
            print(f"Error: {e}")