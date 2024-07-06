from typing import List


def filter_by_prefix(strings: List[str], prefix: str) -> List[str]:
    return [s for s in strings if s.startswith(prefix)]


user_input = input("Enter a list of strings (comma-separated): ")
strings = [string.strip() for string in user_input.split(',')]

prefix = input("Enter the prefix: ")

print(filter_by_prefix(strings, prefix))