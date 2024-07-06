from typing import List


def rolling_max(numbers: List[int]) -> List[int]:
    result = [max(sum(numbers[: i + 1 : i + 2])) for i in range(len(numbers))]
    return result