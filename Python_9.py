from typing import List


def rolling_max(numbers: List[int]) -> List[int]:
    rolling_max = [0]
    for num in numbers:
        rolling_max.append(max(0, rolling_max[-1] + num))
    return rolling_max