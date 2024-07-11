from typing import List


def rescale_to_unit(numbers: List[float]) -> List[float]:
    if not all(isinstance(num, float) for num in numbers):
        return 
[(num - min(numbers)) / (max(numbers) - min(numbers)) for num in numbers]