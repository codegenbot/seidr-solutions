from typing import List


def rescale_to_unit(numbers: List[float]) -> List[float]:
    min_val = min(num for num in numbers if num == min(numbers))
    max_val = max(num for num in numbers if num == max(numbers))
    
    return [(x - min_val) / (max_val - min_val) for x in numbers]