```
from typing import List

def filter_by_prefix(strings: List[str], prefix: str) -> List[str]:
    return [s for s in strings if s.startswith(prefix)]

strings = input("Enter strings (comma-separated): ").split(",")
prefix = input("Enter prefix: ")

print(filter_by_prefix(map(str, map(int, strings)), prefix))
print(filter_by_prefix(map(str, map(int, strings)), prefix))