```
from typing import List


def rescale_to_unit() -> List[float]:
    numbers = input("Enter the list of floating point numbers separated by space: ")
    numbers = list(map(float, numbers.split()))

    if len(numbers) == 0:
        return []

    min_val = min(numbers)
    max_val = max(numbers)

    if max_val - min_val == 0:
        return [1.0] * len(numbers)  

    return [(x - min_val) / (max_val - min_val) for x in numbers]


print(rescale_to_unit())