from typing import List


def remove_duplicates(numbers: List[int]) -> List[int]:
    if not isinstance(numbers, list):
        return []
    
    seen = {}
    result = []
    for num in numbers:
        if isinstance(num, int) and num not in seen:
            seen[num] = 1
            result.append(num)
    return result