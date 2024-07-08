from typing import List


def rolling_max(numbers: List[int]) -> List[int]:
    max_rolling_sum = [0] * len(numbers)
    max_sum = current_sum = numbers[0]
    max_rolling_sum[0] = current_sum
    for i in range(1, len(numbers)):
        current_sum += numbers[i]
        if current_sum > max_sum:
            max_sum = current_sum
        max_rolling_sum[i] = max_sum
    return max_rolling_sum