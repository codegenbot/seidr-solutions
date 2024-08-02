from typing import List


def max_rolling_sum(numbers: List[int], k: int) -> List[int]:
    result = [max(sum(numbers[i : i + k])) for i in range(len(numbers) - k + 1)]
    return result