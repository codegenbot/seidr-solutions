```Python
from typing import List


def rescale_to_unit(numbers: List[float]) -> List[float]:
    if not all(isinstance(num, float) for num in numbers):
        return "Invalid input. Please enter only floating point numbers."
    
    return [(num - min(numbers)) / (max(numbers) - min(numbers)) for num in numbers]