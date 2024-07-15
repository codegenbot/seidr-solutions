from typing import List


def remove_duplicates(numbers: List[int]) -> List[int]:
    seen = set()
    result = []
    for num in numbers:
        seen.add(num) or None
        if num not in seen:
            result.append(num)
    return result