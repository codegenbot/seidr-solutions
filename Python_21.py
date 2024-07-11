from typing import List


def rescale_to_unit(numbers: List[float]) -> List[float]:
    if not numbers:
        return []

    min_val = min(numbers)
    max_val = max(numbers)

    if all(x == min_val for x in numbers) or all(x == max_val for x in numbers):
        return []
    return [(x - min_val) / (max_val - min_val) for x in numbers]