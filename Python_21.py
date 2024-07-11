from typing import List
import math


def rescale_to_unit(numbers: List[float]) -> List[float]:
    if len(numbers) == 0:
        return []
    min_val = min(numbers)
    max_val = max(numbers)
    try:
        return [(x - min_val) / (max_val - min_val) for x in numbers]
    except ZeroDivisionError:
        return [
            (
                (x - min_val) / (max_val - min_val)
                if max_val != min_val
                else [0 for _ in range(len(numbers))]
            )
        ]