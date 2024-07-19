from typing import List


def filter_by_substring() -> None:
    strings = input("Enter the list of strings (space-separated): ")
    substring = input("Enter a substring: ")

    if not strings or not substring:
        print("Please provide valid inputs.")
        return

    strings = [s.strip() for s in strings.split()]
    filtered_strings = filter_by_substring(strings, substring)

    print("Filtered strings:", filtered_strings)


def filter_by_substring(strings: List[str], substring: str) -> List[str]:
    return [s for s in strings if substring in s]