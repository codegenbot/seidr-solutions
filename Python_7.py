from typing import List

def filter_by_substring(strings: List[str], substring: str) -> List[str]:
    return [string for string in strings if substring.lower() in string.lower()]

strings = input().split()
substring = input()

filtered_strings = filter_by_substring(strings, substring)
print(filtered_strings)