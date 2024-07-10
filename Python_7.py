```
from typing import List
import re

def filter_by_substring():
    strings = input("Enter strings (space-separated): ")
    substring = input("Enter a substring: ")

    try:
        strings = [s.strip() for s in strings.split()]
    except ValueError:
        return "Invalid input. Please enter space-separated strings."

    if not substring:
        return []

    pattern = re.compile(substring)

    result = [s for s in strings if bool(pattern.search(s))]
    print('\n'.join(map(str, result)))

filter_by_substring()