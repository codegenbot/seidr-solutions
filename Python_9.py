from typing import List, Tuple


def rolling_max(numbers: List[int]) -> List[int]:
    max_so_far = numbers[0]
    rolling_max_list = [max_so_far]
    for number in numbers[1:]:
        max_so_far = max(max_so_far, number)
        rolling_max_list.append(max_so_far)
    return rolling_max_list