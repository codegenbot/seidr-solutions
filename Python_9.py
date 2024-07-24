from typing import List


def rolling_max(numbers: List[int]) -> List[int]:
    result = [
        max(i) for i in zip(*[[(j)] + numbers[: i + 1] for j, i in enumerate(numbers)])
    ]
    return result