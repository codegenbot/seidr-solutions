from typing import List, Tuple


def rolling_max(numbers: List[int]) -> List[int]:
    result = []
    max_num = None
    for num in numbers:
        if max_num is None or num > max_num:
            max_num = num
        result.append(max_num)
    return result