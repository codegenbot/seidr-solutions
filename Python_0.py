```
from typing import List

def has_close_elements(numbers: List[float], threshold: float) -> bool:
    if not isinstance(threshold, (int, float)):
        return 
    
    try:
        numbers = list(set([float(x) for x in numbers]))
        numbers.sort()
        for i in range(1, len(numbers)):
            if abs(numbers[i] - numbers[i-1]) <= threshold:
                return True
        return False
    except ValueError:
        return