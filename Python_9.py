from typing import List, Tuple


def rolling_max(numbers: List[int]) -> List[int]:
    result = [numbers[0]]
    for i in range(1, len(numbers)):
        result.append(max(numbers[: i + 1]))
    return result