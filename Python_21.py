from typing import List


def rescale_to_unit(numbers: List[float]) -> List[float]:
    if not numbers:
        return []

    min_val = min(numbers)
    max_val = max(numbers)

    if max_val == min_val:
        # all values are the same, return the original list
        return [1.0] * len(numbers)
    else:
        return [(x - min_val) / (max_val - min_val) for x in numbers]