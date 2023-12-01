from typing import List, Tuple


def rolling_max(numbers: List[int]) -> List[int]:
    result = []
    max_number = float('-inf')
    for num in numbers:
        max_number = max(max_number, num)
        result.append(max_number)
    return result