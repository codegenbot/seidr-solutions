from typing import List


def rescale_to_unit(numbers: List[float]) -> List[float]:
    if not all(isinstance(x, float) for x in numbers):
        raise ValueError("Invalid input - please provide only floating-point numbers")
    min_val = min(numbers)
    max_val = max(numbers)
    return [(x - min_val) / (max_val - min_val) for x in numbers]