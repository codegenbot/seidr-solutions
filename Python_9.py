from typing import List, Tuple


def rolling_max(numbers: List[Tuple[int, int]]) -> List[int]:
    result = []
    max_num = float("-inf")
    for num, _ in numbers:
        max_num = max(max_num, num)
        result.append(max_num)
    return result