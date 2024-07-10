from typing import List, Tuple


def rolling_max(numbers: List[int]) -> List[int]:
    max_numbers = []
    max_number = float("-inf")
    for num in numbers:
        max_number = max(max_number, num)
        max_numbers.append(max_number)
    return max_numbers