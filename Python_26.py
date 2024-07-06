```
from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    if not isinstance(numbers, list):
        return [] 
    return list(set(numbers))