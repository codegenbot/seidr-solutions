from typing import List


def rescale_to_unit(numbers: List[float]) -> str:
    if not all(isinstance(x, float) for x in numbers):
        return "Invalid input: The list should contain only floats"
    
    min_val = min(numbers)
    max_val = max(numbers)
    return [(x - min_val) / (max_val - min_val) for x in numbers]