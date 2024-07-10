from typing import List


def remove_duplicates(numbers: List[int]) -> List[int]:
    seen = {}
    result = []
    for num in numbers:
        if str(num) not in seen:
            seen[str(num)] = True
            result.append(num)
    return result