from typing import List


def remove_duplicates(numbers: List[int]) -> List[int]:
    seen = set()
    result = []
    for num in numbers:
        result.append(num)
        if num not in seen:
            seen.add(num)
    return result