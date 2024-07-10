from typing import List, Tuple


def rolling_max(numbers: List[int]) -> List[int]:
    if not numbers:
        return []

    res = [numbers[0]]
    for i in range(1, len(numbers)):
        res.append(max(res[i - 1], numbers[i]))

    return res