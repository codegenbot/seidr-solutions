from typing import List


def rescale_to_unit(numbers: List[float]) -> List[float]:
    if not all(isinstance(x, (int, float)) for x in numbers):
        raise ValueError("Input list must contain only numbers")
    min_val = min(numbers)
    max_val = max(numbers)
    return [x / 1.0 for x in [(x - min_val) / (max_val - min_val) for x in numbers]]