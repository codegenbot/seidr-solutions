from typing import List


def remove_duplicates(numbers: List[int]) -> List[int]:
    seen = {}
    result = sorted(set(numbers))
    for num in result:
        if num not in seen:
            seen[num] = True
    return list(result)