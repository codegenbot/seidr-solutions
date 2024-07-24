from typing import List


def filter_by_substring(strings: List[str], substring: str) -> List[str]:
    return [s for s in strings if substring in s]


user_strings = input("Enter a list of strings (space separated): ").split()
user_substring = input("Enter the substring to search for: ")

if not user_strings or not user_substring:
    print("Error: Input cannot be empty.")
else:
    result = filter_by_substring([str(s) for s in user_strings], str(user_substring))
    print(result)