```Python
from typing import List


def filter_by_substring():
    user_strings = input("Enter comma-separated strings: ").split(",")
    substring = input("Enter a substring to search: ")

    filtered_strings = [s.strip() for s in user_strings if substring.lower() in s.lower()]
    
    return filtered_strings

print(filter_by_substring())