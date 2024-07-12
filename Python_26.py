```
from typing import List


def remove_duplicates(numbers: List[int]) -> List[int]:
    seen = set()
    for num in numbers:
        seen.add(num)
    return list(seen)