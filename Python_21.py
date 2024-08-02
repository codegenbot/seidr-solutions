from typing import List


def rescale_to_unit(numbers: List[float]) -> List[float]:
    if not all(isinstance(num, (int, float)) for num in numbers):
        return "Error: Input must be a list of numbers"
    return [(x - min(numbers)) / (max(numbers) - min(numbers)) for x in numbers]