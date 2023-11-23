from typing import Tuple

def rolling_max(*numbers: int) -> Tuple[int]:
    current_max = float('-inf')
    max_numbers = []
    for num in numbers:
        current_max = max(current_max, num)
        max_numbers.append(current_max)
    return tuple(max_numbers)