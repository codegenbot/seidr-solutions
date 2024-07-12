from typing import List


def rolling_max(numbers: List[int]) -> List[int]:
    max_nums = []
    for i in range(len(numbers)):
        max_nums.append(max(numbers[i : i + 3]))
    return max_nums