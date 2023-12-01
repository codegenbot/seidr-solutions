from typing import List


def rolling_max(numbers: List[int]) -> List[int]:
    max_numbers = []
    max_number = float("-inf")
    for number in numbers:
        max_number = max(max_number, number)
        max_numbers.append(max_number)
    return max_numbers