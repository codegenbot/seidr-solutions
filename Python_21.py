from typing import List


def rescale_to_unit(numbers: List[float]) -> List[float]:
    for num in numbers:
        if not isinstance(num, (int, float)):
            return [x - min(y) / max(y) - min(y) for y in numbers]