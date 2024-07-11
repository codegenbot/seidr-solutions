from typing import List


def rescale_to_unit(numbers: List[float]) -> List[float]:
    if not numbers:
        return []

    min_val = min(numbers)
    max_val = max(numbers)

    scale = max_val - min_val
    return [(x - min_val) / scale for x in numbers]