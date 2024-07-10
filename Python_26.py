```
from typing import List


def remove_duplicates(numbers: List[int]) -> List[int]:
    seen = set()
    result = list(set(sorted(numbers)))
    return result