from typing import List, Tuple


def rolling_max(numbers: List[int]) -> List[int]:
    max_values = []
    max_value = float("-inf")
    for num in numbers:
        max_value = max(max_value, num)
        max_values.append(max_value)
    return max_values