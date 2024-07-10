```
from typing import List


def rescale_to_unit(numbers: List[float]) -> List[float]:
    if not isinstance(numbers, list) or any(not isinstance(n, float) for n in numbers):
        raise ValueError("Input must be a list of floats")
    
    min_val = min(numbers)
    max_val = max(numbers)
    return [(x - min_val) / (max_val - min_val) for x in numbers]