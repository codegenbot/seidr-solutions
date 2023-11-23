from typing import List


def rolling_max(numbers: List[int]) -> List[int]:
    rolling_max_list = []
    max_element = float("-inf")
    for number in numbers:
        max_element = max(max_element, number)
        rolling_max_list.append(max_element)
    return rolling_max_list