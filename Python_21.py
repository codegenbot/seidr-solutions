```
from typing import List


def rescale_to_unit(numbers: List[float]) -> List[float]:
    min_val = min(numbers)
    max_val = max(numbers)
    return [(x - min_val) / (max_val - min_val) for x in numbers]


numbers = list(map(float, input("Enter numbers separated by space: ").split()))
rescaled_numbers = rescale_to_unit(numbers)
print(rescaled_numbers)