```
from typing import List

def filter_by_prefix(strings: List[str], prefix: str) -> List[str]:
    filtered_strings = [s for s in strings if s.startswith(prefix)]
    return filtered_strings

print(filter_by_prefix(["apple", "banana", "apricot"], "ap"))
print(filter_by_script(["apple", "banana", "cherry"], "ap"))