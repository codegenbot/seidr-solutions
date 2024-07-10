from typing import List


def remove_duplicates(numbers: List[int]) -> List[int]:
    seen = {}
    result = []
    numbers.sort()
    for num in numbers:
        if num not in seen:
            seen[num] = True
            result.append(num)
    return result