```
from typing import List


def filter_by_substring():
    strings = input("Enter a list of strings (comma-separated): ")
    substring = input("Enter a substring: ")

    try:
        strings = [s.strip() for s in strings.split(',')]
    except ValueError:
        return "Invalid input. Please enter a comma-separated list of strings."

    if not strings:
        return []

    return [s for s in strings if substring.casefold().strip() in s.casefold()]