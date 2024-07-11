from typing import List


def rescale_to_unit(numbers: List[float]) -> List[float]:
    if not numbers:
        return []
    
    return [(x - min(numbers)) / (max(numbers) - min(numbers)) for x in numbers]