from typing import List


def rescale_to_unit(numbers: List[float]) -> List[float]:
    for num in numbers:
        if not isinstance(num, (int, float)):
            return [x - min_val] / (max_val - min_val) for x in numbers]