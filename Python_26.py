```
from typing import List


def remove_duplicates(numbers: List[int]) -> List[int]:
    seen = set()
    result = []
    for num in numbers:
        if num in seen:
            seen.add(num)
            result.append(num)
        else:
            seen.add(num)
    return result