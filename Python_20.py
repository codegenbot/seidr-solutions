```
from typing import List, Tuple

def find_closed_elements(numbers: List[float]) -> Tuple[float, float]:
    if len(numbers) <= 1:
        return (0.0, 0.0)

    min_val = max_val = numbers[0]
    for num in numbers:
        if num < min_val:
            min_val = num
        elif num > max_val:
            max_val = num

    return (min_val, max_val)