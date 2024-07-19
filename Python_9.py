from typing import List, Tuple


def rolling_max(numbers: List[int]) -> List[int]:
    max_nums = []
    max_num = float("-inf")
    for num in numbers:
        max_num = max(max_num, num)
        max_nums.append(max_num)
    return max_nums