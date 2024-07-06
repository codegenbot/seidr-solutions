from typing import List


def rescale_to_unit(numbers: List[float]) -> List[float]:
    try:
        min_val = min(x for x in numbers if isinstance(x, (int, float)))
        max_val = max(x for x in numbers if isinstance(x, (int, float)))
        return [(x - min_val) / (max_val - min_val) for x in numbers]
    except TypeError:
        raise ValueError("Input list must contain only numbers")