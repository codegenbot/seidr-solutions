from typing import List


def filter_by_substring(strings: List[str], substring: str) -> List[str]:
    return [string for string in strings if substring in string]


strings = input("Enter the list of strings separated by spaces and enclosed by quotation marks: ").split()
substring = input("Enter the substring to filter by: ")
result = filter_by_substring(strings, substring)
print(result)