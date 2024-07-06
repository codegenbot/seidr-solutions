from typing import List


def rescale_to_unit(numbers: List[float]) -> List[float]:
    if any(not isinstance(x, (int, float)) for x in numbers):
        raise ValueError("Input list must not contain non-numerics")
    if not all(isinstance(x, (int, float)) for x in numbers):
        raise ValueError("Input list must contain only numbers")
    min_val = min(numbers)
    max_val = max(numbers)
    return [(x - min_val) / (max_val - min_val) for x in numbers]