from typing import List


def rolling_max(numbers: List[int]) -> List[int]:
    if (
        not numbers
        or not isinstance(numbers, list)
        or not all(isinstance(num, int) for num in numbers)
    ):
        return []

    rolling_max_list = []
    max_num = float("-inf")
    for num in numbers:
        max_num = max(max_num, num)
        rolling_max_list.append(max_num)
    return rolling_max_list