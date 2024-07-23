from typing import List


def filter_by_prefix() -> List[str]:
    while True:
        user_input = input("Enter a list of strings (space-separated): ")
        user_strings = user_input.split()
        strings = " ".join(user_strings).strip()

        prefix = input("Enter a prefix: ")

        if not prefix:
            raise ValueError("Please enter valid prefix!")

        filtered_strings = [
            s.strip() for s in strings.split() if s.strip().startswith(prefix)
        ]
        return filtered_strings