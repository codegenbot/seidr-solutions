from typing import List


def rolling_max(numbers: List[int]) -> List[int]:
    result = [
        max(numbers[i - j : i + 1]) for i in range(len(numbers)) for j in range(i + 1)
    ]
    return result