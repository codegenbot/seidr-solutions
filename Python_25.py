from typing import List


def sum_of_squares(numbers: List[int]) -> int:
    total = 0
    for num in numbers:
        total += num**2
    return total