```
from typing import List, Tuple

def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    if not isinstance(numbers, list):
        print("Error: Input must be a list of floats.")
        return None
    for num in numbers:
        if not isinstance(num, (int, float)):
            print("Error: All elements in the input list must be floats.")
            return None
    
    min_diff = float('inf')
    closest_pair = ()
    
    for i in range(len(numbers)):
        for j in range(i + 1, len(numbers)):
            diff = abs(numbers[i] - numbers[j])
            if diff < min_diff:
                min_diff = diff
                closest_pair = (min(numbers[i], numbers[j]), max(numbers[i], numbers[j]))
    
    return closest_pair