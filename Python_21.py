from typing import list
def rescale_to_unit(numbers: list[float]) -> list[float]:
    min_val = min(numbers)
    max_val = max(numbers)
    return [(x - min_val) / (max_val - min_val) for x in numbers]