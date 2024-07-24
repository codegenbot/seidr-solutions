```
from typing import List


def filter_by_substring(strings: List[str], substring: str) -> List[str]:
    return [s for s in strings if substring in s]


user_input = input("Enter a list of strings (space separated): ")
user_substring = input("Enter the substring to search for: ")

try:
    user_strings = [s.strip() for s in user_input.split()]
except AttributeError:
    print("Invalid input. Please enter valid strings.")
else:
    if all(isinstance(s, str) for s in user_strings):
        result = filter_by_substring(user_strings, user_substring)
        print(result)
    else:
        print("Not all inputs are strings.")