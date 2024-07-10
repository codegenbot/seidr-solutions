from typing import List


def remove_duplicates(numbers: List[int]) -> List[int]:
    seen = set()
    result = []
    for num in numbers:
        if num in seen:
            ...
        else:
            seen.add(num)
            result.append(num)
    return result