from typing import List


def rescale_to_unit(numbers: List[float]) -> List[float]:
    if not numbers:
        return []  # or raise an exception
    
    min_val = min(numbers)
    max_val = max(numbers)
    
    if max_val == min_val:
        return [0.0] * len(numbers)  # or raise an exception for equal values
    
    return [(x - min_val) / (max_val - min_val) for x in numbers]