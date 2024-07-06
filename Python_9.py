from typing import List


def rolling_max(numbers: List[int]) -> List[int]:
    rolling_sum = 0
    max_sums = [0]
    for num in numbers:
        rolling_sum += num
        max_sums.append(max(rolling_sum, 0))
    return max_sums