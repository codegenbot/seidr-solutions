from typing import List

def filter_by_substring(strings: List[str], substring: str) -> List[str]:
    return [s for s in strings if substring in s]

strings = ['apple', 'banana', 'cherry']
substring = 'an'
filtered_strings = filter_by_substring(strings, substring)
filtered_strings