from typing import List


def rescale_to_unit(numbers: List[float]) -> List[float]:
    if len(numbers) < 1:
        return []

    range_val = max(numbers) - min(numbers)
    if range_val == 0:
        return [0.0] * len(numbers)

    return [(x - min(numbers)) / range_val for x in numbers]