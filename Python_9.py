from typing import List, Tuple


def rolling_max(numbers: List[int]) -> List[int]:
    max_numbers = []
    current_max = None
    for num in numbers:
        if current_max is None or num > current_max:
            current_max = num
        max_numbers.append(current_max)
    return max_numbers