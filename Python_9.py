from typing import List


def rolling_max(numbers: List[int]) -> List[int]:
    result = [max(numbers[max(0, i - n + 1):i + 1]) for i, n in enumerate(range(1, len(numbers) + 1), 1)]
    return result