from typing import List


def filter_by_prefix() -> List[str]:
    while True:
        user_input = input("Enter a list of strings (space-separated): ")
        strings = user_input.strip()
        user_strings = strings.split()

        prefix = input("Enter a prefix: ")

        if not prefix:
            raise ValueError("Please enter valid prefix!")

        filtered_strings = [
            s.strip() for s in user_strings if s.strip().startswith(prefix)
        ]
        return filtered_strings