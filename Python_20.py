```Python
from typing import List, Tuple

def find_closed_elements(numbers: List[float]) -> Tuple[float, float]:
    if len(numbers) <= 1:
        return ()
    
    numbers.sort()
    for i in range(len(numbers) - 1):
        diff = abs((numbers[i] + numbers[i+1])/2 - numbers[i])
        if diff <= 0.5:
            return (numbers[i], (numbers[i] + numbers[i+1])/2)
    return ()