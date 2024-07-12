from typing import List


def rescale_to_unit(numbers: List[float]) -> List[float]:
    if not numbers:
        return []
    
    if 0 in numbers:
        min_val = min(x for x in numbers if x != 0)
        max_val = max(x for x in numbers if x != 0)
        return [(x - min_val) / (max_val - min_val) for x in numbers]
    else:
        min_val = min(numbers)
        max_val = max(numbers)
        return [(x - min_val) / (max_val - min_val) for x in numbers]