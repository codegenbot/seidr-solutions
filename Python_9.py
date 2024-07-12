from typing import List, Tuple


def rolling_max(numbers: List[int]) -> List[int]:
    max_num = float("-inf")
    rolling_max_nums = []
    for num in numbers:
        max_num = max(max_num, num)
        rolling_max_nums.append(max_num)
    return rolling_max_nums