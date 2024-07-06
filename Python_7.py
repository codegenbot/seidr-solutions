```
from typing import List

def filter_by_substring(strings: List[str], substring: str) -> List[str]:
    return [s for s in strings if substring in s]

result = filter_by_substring(input("Enter strings (space-separated): ").split(), input("Enter substring: "))
print(result)