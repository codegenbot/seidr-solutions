```
from typing import List

def has_close_elements(numbers: List[float], threshold: float) -> bool:
    if not isinstance(threshold, (int, float)):
        raise ValueError("Threshold should be a number")
    
    numbers.sort()
    for i in range(1, len(numbers)):
        if abs(numbers[i] - numbers[i-1]) <= threshold:
            return True
    return False