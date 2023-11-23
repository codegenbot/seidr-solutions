from typing import List

def filter_by_prefix(strings: List[str], prefix: str) -> List[str]:
    return sorted({string for string in strings if string.startswith(prefix)})


n = 3  # Sample value for the number of strings
strings = ['apple', 'banana', 'orange']  # Sample values for the strings
prefix = 'a'  # Sample value for the prefix

filtered_strings = filter_by_prefix(strings, prefix)

print(filtered_strings)