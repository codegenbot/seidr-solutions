```
from typing import List


def rescale_to_unit(numbers: List[float]) -> List[float]:
    if not numbers:
        return []

    min_val = min(numbers)
    max_val = max(numbers)

    if min_val == max_val:
        return [1.0 if x == min_val else 0 for x in numbers]
    return [(x - min_val) / (max_val - min_val) for x in numbers]