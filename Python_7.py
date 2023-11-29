from typing import List

def filter_by_substring(strings: List[str], substring: str) -> List[str]:
    return [string for string in strings if substring in string]

strings = input("Enter a list of strings: ").split()
substring = input("Enter the substring to filter by: ")
result = filter_by_substring(strings, substring)
print(result)