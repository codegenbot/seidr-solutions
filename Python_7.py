```
from typing import List

def filter_by_substring(strings: list, substring: str) -> list:
    return [s for s in strings if substring in s]

result = filter_by_substring(input("Enter strings (space-separated): ").split(), input("Enter substring: "))
print(result)