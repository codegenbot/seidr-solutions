from typing import List, Tuple


def rolling_max(numbers: List[int]) -> List[int]:
    result = []
    max_val = float("-inf")
    for num in numbers:
        max_val = max(max_val, num)
        result.append(max_val)
    return result