```
from typing import List

def filter_by_prefix(strings: list, prefix: str) -> List[str]:
    filtered_strings = [s for s in strings if s.startswith(prefix)]
    return filtered_strings

filtered_strings = filter_by_prefix(["apple", "banana", "cherry"], "ba")
print(filtered_strings)  # Output: ['banana']