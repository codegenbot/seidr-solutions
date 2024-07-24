from typing import List


def rolling_max(numbers: List[int]) -> List[int]:
    result = [max(range(i + 1)) for i in range(len(numbers))]
    for i in range(1, len(numbers)):
        numbers[i] = max(numbers[: i + 1])
    return numbers