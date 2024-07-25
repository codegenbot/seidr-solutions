```
from typing import List


def rescale_to_unit(numbers: List[float]) -> List[float]:
    if not numbers:
        return []

    try:
        min_val = min(x for x in numbers if isinstance(x, (int, float)))
        max_val = max(x for x in numbers if isinstance(x, (int, float)))
        
        if max_val == min_val:
            # all values are the same
            return [0.0] * len(numbers)
        else:
            if not all(isinstance(x, (int, float)) for x in numbers):
                return []
            return [(x - min_val) / (max_val - min_val) for x in numbers]
    except:
        return []