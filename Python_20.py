from typing import List, Tuple

def find_closed_elements(numbers: List[float]) -> Tuple[float, float]:
    if len(numbers) <= 1:
        return (0.0, 0.0)
    
    return (min(numbers), max(numbers))