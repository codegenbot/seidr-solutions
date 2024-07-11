from typing import List


def rescale_to_unit(numbers: List[float]) -> List[float]:
    if len(set(numbers)) == 1:
        return [0] * len(numbers)
    return [(x - min(numbers)) / (max(numbers) - min(numbers)) for x in numbers]