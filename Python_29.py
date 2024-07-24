```
from typing import List
def filter_by_prefix(strings: List[str], prefix: str) -> List[str]:
    return [s for s in strings if s.startswith(prefix)]

strings = input("Enter the list of strings (space-separated): ")
prefix = input("Enter the prefix: ")

print(filter_by_prefix([string.strip() for string in strings.split()], prefix))