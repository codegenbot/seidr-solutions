from typing import List


def rolling_max(numbers: List[int], window_size: int) -> List[int]:
    result = [max(numbers[i:i + window_size]) for i in range(len(numbers) - window_size + 1)]
    return result