```
from typing import Set, List

def remove_duplicates(numbers: list[int]) -> list[int]:
    seen: Set[int] = set()
    result: List[int] = []
    for num in numbers:
        if num not in seen:
            seen.add(num)
            result.append(num)
    return result