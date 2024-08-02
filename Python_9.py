from typing import List


def max_rolling_sum(numbers: List[int], k: int) -> List[int]:
    result = [sum(numbers[i : i + k]) for i in range(len(numbers) - k + 1)]
    return [max(result[: i + 1]) for i in range(len(result))]