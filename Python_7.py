from typing import List
import re


def filter_by_substring():
    input_str = input("Enter strings (comma-separated): ")
    substring = input("Enter a substring: ")

    try:
        strings = [s.strip() for s in input_str.split(",")]
    except ValueError:
        return []

    if not strings or not substring:
        return []

    pattern = re.compile(substring)

    result = [s for s in strings if bool(pattern.search(s))]
    print(result)


filter_by_substring()