from typing import List


def rolling_max(numbers: List[int]) -> List[int]:
    result = [max(x for x in numbers[: i + 1]) for i in range(len(numbers))]
    return result