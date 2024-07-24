```
from typing import List


def filter_by_substring(strings: List[str], substring: str) -> List[str]:
    return [s for s in strings if substring in s]


user_input = input("Enter a list of strings (space separated): ").split()
user_substring = input("Enter the substring to search for: ")

valid_strings = [s.strip() for s in user_input if len(s.strip()) > 0]
result = filter_by_substring(valid_strings, user_substring)

print(result)