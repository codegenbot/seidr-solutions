from typing import List


def rescale_to_unit(numbers: List[float]) -> List[float]:
    if not numbers:
        return []

    min_val = min(numbers)
    max_val = max(numbers)

    scale_factor = max_val - min_val
    if scale_factor == 0:
        return [1.0] * len(numbers) 

    return [(x - min_val) / scale_factor for x in numbers]