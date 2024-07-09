from typing import List, Tuple


def rolling_max(numbers: List[int]) -> List[int]:
    max_so_far = float("-inf")
    max_list = []
    for num in numbers:
        max_so_far = max(max_so_far, num)
        max_list.append(max_so_far)
    return max_list