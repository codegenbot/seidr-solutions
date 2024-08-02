from typing import List


def rescale_to_unit(numbers: List[float]) -> List[float]:
    if not isinstance(numbers, list):
        raise ValueError("Input must be a list")
    for x in numbers:
        if not isinstance(x, float):
            raise ValueError("All elements in the list must be floats")
    return [(x - min(numbers)) / (max(numbers) - min(numbers)) for x in numbers]