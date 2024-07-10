from typing import List, Tuple


def rolling_max(numbers: List[int]) -> List[int]:
    max_num = None
    rolling_max_list = []
    for num in numbers:
        if max_num is None or num > max_num:
            max_num = num
        rolling_max_list.append(max_num)
    return rolling_max_list