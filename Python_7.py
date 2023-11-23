from typing import List


def filter_by_substring(strings: List[str], substring: str) -> List[str]:
    return [s for s in strings if substring in s]


substring = input("Enter a substring: ")
strings = input("Enter a list of strings separated by space: ").split()
result = filter_by_substring(strings, substring)
print(result)