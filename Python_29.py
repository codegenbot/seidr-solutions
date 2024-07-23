from typing import List


def filter_by_prefix() -> List[str]:
    strings = input("Enter a list of strings (space-separated): ").strip()
    while not strings:
        print("Please enter valid inputs!")
        strings = input("Enter a list of strings (space-separated): ").strip()

    prefix = input("Enter a prefix: ")

    if not prefix:
        raise ValueError("Please enter valid prefix!")

    filtered_strings = [
        s.strip() for s in strings.split() if s.strip().startswith(prefix)
    ]

    return filtered_strings