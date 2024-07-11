from typing import List


def rescale_to_unit(numbers: List[float]) -> List[float]:
    min_val = float("inf")
    max_val = float("-inf")

    for num in numbers:
        if num < min_val:
            min_val = num
        elif num > max_val:
            max_val = num

    return [(x - min_val) / (max_val - min_val) for x in numbers]