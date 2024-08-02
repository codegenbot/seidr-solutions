```
from typing import List


def rescale_to_unit(numbers: List[float]) -> List[float]:
    if len(numbers) == 0:
        return []
    elif max(numbers) - min(numbers) == 0:
        print("Error: The maximum and minimum values are equal. Division by zero is not allowed.")
        return numbers
    else:
        return [(x - min(numbers)) / (max(numbers) - min(numbers)) for x in numbers]