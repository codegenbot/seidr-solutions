from typing import List


def rolling_max(numbers: List[int]) -> List[int]:
    max_nums = []
    for i in range(len(numbers)):
        max_nums.append(max(numbers[i : min(i + 3, len(numbers))]))
    return max_nums