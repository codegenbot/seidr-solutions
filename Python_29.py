```
from typing import List


def filter_by_prefix(strings: List[str], prefix: str) -> List[str]:
    return [s for s in strings if s.startswith(prefix)]


strings = [s.strip() for s in input("Enter the list of strings (comma-separated): ").split(",")]
prefix = input("Enter the prefix to filter by: ").strip()

print(filter_by_prefix(strings, prefix))