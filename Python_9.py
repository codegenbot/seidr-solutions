from typing import List, Tuple


def rolling_max(numbers: List[int]) -> List[int]:
    max_list = []
    for i in range(len(numbers)):
        max_val = max(numbers[: i + 1])
        max_list.append(max_val)
    return max_list