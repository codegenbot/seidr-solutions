from typing import List
import re


def filter_by_substring():
    input_strings = input("Enter strings (space-separated): ")
    substring = input("Enter a substring: ")

    try:
        strings = [s.strip() for s in input_strings.split()]
    except ValueError:
        return "Invalid input. Please enter space-separated strings."

    if not strings or not substring:
        return []

    pattern = re.compile(substring)

    result = [s for s in strings if bool(pattern.search(s))]
    print(result)


filter_by_substring()