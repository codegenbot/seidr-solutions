```
from typing import List


def rescale_to_unit(numbers: List[float]) -> List[float]:
    if len(set(type(n) for n in numbers)) > 1:
        return "Error: Input list must contain only floats"
    try:
        min_val = min(numbers)
        max_val = max(numbers)
        if max_val - min_val == 0:
            return ["NaN"]  
        return [(n - min_val) / (max_val - min_val) for n in numbers]
    except TypeError as e:
        return "Error: Input list must contain only floats"