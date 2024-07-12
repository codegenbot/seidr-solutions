from typing import List


def rolling_max(numbers: List[int], n: int) -> List[int]:
    result = [max(numbers[max(0, i - n + 1):i + 1]) for i in range(n - 1, len(numbers))]
    return result