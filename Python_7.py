from typing import List

def filter_by_substring(strings: List[str], substring: str) -> List[str]:
    return [s for s in strings if substring in s]

strings = input().split(', ')
substring = input()
filtered_strings = filter_by_substring(strings, substring)
print(filtered_strings)