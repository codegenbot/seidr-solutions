from typing import List


def filter_by_prefix(strings: List[str], prefix: str) -> List[str]:
    return [s for s in strings if s.startswith(prefix)]


strings = input("Enter a list of strings (separated by comma): ").split(",")
prefix = input("Enter the prefix to be searched: ")

print(filter_by_prefix([s.strip() for s in strings], prefix))