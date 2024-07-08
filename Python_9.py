from typing import List


def rolling_max(numbers: List[int]) -> List[int]:
    max_rolling_sum = [numbers[0]]
    current_max = numbers[0]
    for i in range(1, len(numbers)):
        current_max = max(current_max, numbers[i])
        max_rolling_sum.append(current_max)
    return max_rolling_sum