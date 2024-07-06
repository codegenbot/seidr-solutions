from typing import List


def rolling_max(numbers: List[int]) -> List[int]:
    max_until_here = [max(numbers[: i + 1]) for i in range(len(numbers))]
    return max_until_here