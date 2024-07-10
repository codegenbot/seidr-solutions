```Python
from typing import List

def rescale_to_unit(numbers: List[float]) -> List[float]:
    min_val = min(numbers)
    max_val = max(numbers)

    if len(numbers) == 0:
        return []
    
    if max_val - min_val == 0 and any(x == 0 for x in numbers):
        return numbers
    
    return [(x - min_val) / (max_val - min_val) for x in numbers]