```
from typing import List


def rescale_to_unit(numbers: List[float]) -> List[float]:
    if not all(isinstance(x, (int, float)) for x in numbers):
        raise ValueError("Input list must contain only numbers")

    try:
        unique_values = set(numbers)
        if len(unique_values) < 2:
            raise ValueError("List must contain at least two unique values")
        
        if not numbers:
            return []
        min_val = min(numbers)
        max_val = max(numbers)
        return [(x - min_val) / (max_val - min_val) for x in numbers]
    except TypeError:
        raise ValueError("Input list must contain only numbers")