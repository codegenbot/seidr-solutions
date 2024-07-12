```
from typing import List, Tuple

def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    closest_diff = float('inf')
    closest_pair = (None, None)
    
    for i in range(len(numbers)):
        for j in range(i + 1, len(numbers)):
            diff = abs(numbers[j] - numbers[i])
            if diff < closest_diff:
                closest_diff = diff
                closest_pair = (numbers[i], numbers[j])
    
    return closest_pair