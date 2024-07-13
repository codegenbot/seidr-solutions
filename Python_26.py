```
from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    seen = set()
    return list(seen.union([num for num in numbers if not (num in seen)]))