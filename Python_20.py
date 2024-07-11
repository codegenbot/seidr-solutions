```
from typing import List, Tuple

def find_closed_elements(numbers: List[float]) -> Tuple[float, float]:
    for i in range(len(numbers) - 1):
        if numbers[i] <= numbers[i+1]:
            return (numbers[i], numbers[i+1])
    return ()