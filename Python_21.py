from typing import List

def rescale_to_unit(numbers: List[float]) -> List[float]:
    if len(set(numbers)) == 1:
        return [1 for _ in numbers]
    
    if not numbers:
        return []
    
    min_val = min(numbers)
    max_val = max(numbers)
    
    if (abs(max_val) - abs(min_val)) == 0:
        return [0 for _ in numbers]
        
    return [(x - min_val) / (max_val - min_val) for x in numbers]