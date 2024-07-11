```
from typing import List


def rescale_to_unit(numbers: List[float]) -> List[float]:
    if not isinstance(numbers, list) or not all(isinstance(x, (int, float)) for x in numbers):
        return "Invalid input"

    if len(numbers) == 0:
        return []

    min_val = min(numbers)
    max_val = max(numbers)

    return [(x - min_val) / (max_val - min_val) for x in numbers]