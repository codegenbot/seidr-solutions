from typing import List


def find_max_min_avg(numbers: List[int]) -> Tuple[float, float, float]:
    if not numbers:
        return 0.0, 0.0, 0.0
    max_num = min_num = sum = 0
    for num in numbers:
        if num > max_num:
            max_num = num
        elif num < min_num:
            min_num = num
        sum += num
    return float(max_num), float(min_num), float(sum) / len(numbers)