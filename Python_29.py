from typing import List

def filter_by_prefix(strings: List[str], prefix: str) -> List[str]:
    return [string for string in strings if string.startswith(prefix)]

strings = input("Enter a list of space-separated strings: ").split()
prefix = input("Enter the prefix: ")

filtered_strings = filter_by_prefix(strings, prefix)
print(filtered_strings)