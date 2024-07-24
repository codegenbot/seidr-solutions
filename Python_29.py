from typing import List

def filter_by_prefix(strings: List[str], prefix: str) -> List[str]:
    return [s for s in strings if s.startswith(prefix)]

strings = input("Enter a list of strings separated by space: ").split()
prefix = input("Enter a prefix: ")

print(filter_by_prefix(strings, prefix))