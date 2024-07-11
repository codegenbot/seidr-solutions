from typing import List


def rescale_to_unit(numbers: List[float]) -> List[float]:
    if len(numbers) == 0:
        return []
    numbers = sorted(set(numbers))  # Remove duplicates and sort the list
    min_val = min(numbers)
    max_val = max(numbers)
    return [(x - min_val) / (max_val - min_val) for x in numbers]