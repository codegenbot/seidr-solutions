from typing import List


def rolling_max(numbers: List[int], k: int) -> List[int]:
    result = [max(numbers[i - k + 1 : i + 1]) for i in range(k - 1, len(numbers))]
    return result