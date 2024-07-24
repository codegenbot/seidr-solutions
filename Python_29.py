from typing import List
def filter_by_prefix(strings: List[str], prefix: str) -> List[str]:
    return [s for s in strings if s.startswith(prefix)]

print(filter_by_prefix(["apple", "banana", "apricot"], "ap"))
print(filter_by_prefix(["apple", "banana", "cherry"], "ap"))