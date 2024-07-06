from typing import List


def filter_by_prefix(strings: List[str], prefix: str) -> List[str]:
    return [s for s in strings if s.startswith(prefix)]


strings = [string.strip() for string in input("Enter a list of strings (comma-separated): ").split(',')]
prefix = input("Enter the prefix: ")

print(filter_by_prefix(strings, prefix))