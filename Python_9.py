from typing import List


def rolling_max(numbers: List[int]) -> List[int]:
    result = [max(sum(numbers[: i + 1]), key=max) for i in range(len(numbers))]
    return result