from typing import List
import math


def rescale_to_unit(numbers: List[float]) -> List[float]:
    if not numbers:
        return []

    min_val = min(
        x
        for x in numbers
        if isinstance(x, (int, float)) and not (math.isnan(x) or math.isinf(x))
    )
    max_val = max(
        x
        for x in numbers
        if isinstance(x, (int, float)) and not (math.isnan(x) or math.isinf(x))
    )

    if min_val == max_val:
        return [0.0] * len(numbers)

    return [(x - min_val) / (max_val - min_val) for x in numbers]