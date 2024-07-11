from typing import List


def rescale_to_unit(numbers: List[float]) -> List[float]:
    try:
        min_val = min(numbers)
        max_val = max(numbers)
        return [(x - min_val) / (max_val - min_val) for x in numbers]
    except TypeError:
        return "Error: All elements must be floats."