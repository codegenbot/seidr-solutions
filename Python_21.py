from typing import List

def rescale_to_unit(numbers: List[str]) -> List[float]:
    try:
        if len(set([float(x) for x in numbers])) == 1: 
            return [1 for _ in numbers]
        
        min_val = min(map(float, numbers))
        max_val = max(map(float, numbers))
        
        if max_val - min_val == 0:
            return [0 for _ in numbers]
        
        return [(float(x) - min_val) / (max_val - min_val) for x in numbers]
    except ValueError:
        return "Error: Input list contains non-numeric values"