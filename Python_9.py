from typing import List


def rolling_max(numbers: List[int]) -> List[int]:
    result = []
    for i in range(len(numbers)):
        max_num = max(numbers[i : i + 2])
        if len(result) > 0:
            max_num = max(max_num, result[-1])
        result.append(max_num)
    return result