from typing import List, Tuple


def rolling_max(numbers: List[int]) -> List[int]:
    max_numbers = []
    current_max = float("-inf")
    for num in numbers:
        current_max = max(current_max, num)
        max_numbers.append(current_max)
    return max_numbers