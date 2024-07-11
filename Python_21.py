from typing import List


def rescale_to_unit(numbers: List[float]) -> List[float]:
    if len(numbers) < 2:
        raise ValueError("List should have at least two elements")
    
    return [(x - min(numbers)) / (max(numbers) - min(numbers)) for x in numbers]