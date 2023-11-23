from typing import List


def filter_by_prefix(strings: List[str], prefix: str) -> List[str]:
    return sorted({string for string in strings if string.startswith(prefix)})


strings = input("Enter the strings (separated by spaces): ").split()
prefix = input("Enter the prefix: ")

filtered_strings = filter_by_prefix(strings, prefix.strip())

print(*filtered_strings, sep="\n")