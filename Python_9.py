from typing import List


def rolling_max(numbers: List[int]) -> List[int]:
    result = [max(i for i in numbers[: j + 1]) for j in range(len(numbers))]
    return result