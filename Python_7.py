from typing import List


def filter_by_substring(strings: List[str], substring: str) -> List[str]:
    return [s for s in strings if substring in s]


user_strings = input("Enter a list of strings (space separated): ").split()
user_substring = input("Enter the substring to search for: ")

result = filter_by_substring(user_strings, user_substring)

print(result)