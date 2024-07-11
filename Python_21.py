```
from typing import List


def rescale_to_unit(numbers: List[float]) -> List[float]:
    if not numbers:
        return []
    elif any(not isinstance(num, (int, float)) for num in numbers):
        raise ValueError("Input list must contain only floats")
    else:
        return [(x - min(numbers)) / (max(numbers) - min(numbers)) for x in numbers]