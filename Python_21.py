from typing import List


def rescale_to_unit(numbers: List[float]) -> List[float]:
    min_val = min(numbers)
    max_val = max(numbers)
    if max_val == min_val:
        return [0.5] * len(numbers) 
    return [(x - min_val) / (max_val - min_val) for x in numbers]