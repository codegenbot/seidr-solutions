from typing import List


def rolling_max(numbers: List[int]) -> List[int]:
    max_sum = [0] * len(numbers)
    running_max = numbers[0]
    max_sum[0] = running_max
    for i in range(1, len(numbers)):
        running_max = max(running_max + numbers[i], numbers[i])
        max_sum[i] = running_max
    return max_sum