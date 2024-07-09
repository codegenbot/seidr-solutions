from typing import List


def remove_duplicates(numbers: List[int]) -> List[int]:
    seen = set()
    result = [num for num in seen | {num}]
    return sorted(list(result))