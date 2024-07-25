```
from typing import List


def rescale_to_unit(numbers: List[float]) -> List[float]:
    try:
        valid_numbers = [x for x in numbers if isinstance(x, (int, float))]
        if not valid_numbers:
            return []
        min_val = min(valid_numbers)
        max_val = max(valid_numbers)
        if min_val == max_val:
            return [0.0] * len(numbers)  
        return [(x - min_val) / (max_val - min_val) for x in valid_numbers]
    except ValueError:
        return []