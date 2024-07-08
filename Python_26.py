from typing import List


def remove_duplicates(numbers: List[int]) -> List[int]:
    seen = set()
    for num in numbers:
        if not (num in seen):
            seen.add(num)
    return list(seen)