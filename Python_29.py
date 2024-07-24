from typing import List

def filter_by_prefix(strings: List[str], prefix: str) -> List[str]:
    return [s for s in strings if s.startswith(prefix)]

print(filter_by_prefix(["apple", "banana", "apricot"], "ap")) 
# Output: ['apple', 'apricot']
print(filter_by_filter(["apple", "banana", "cherry"], "ap"))
# Output: []