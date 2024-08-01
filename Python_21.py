```
from typing import List


def rescale_to_unit(numbers: List[float]) -> List[float]:
    min_value = min(numbers)
    max_value = max(numbers)

    if min_value == max_value:
        return [1 for _ in numbers]
    
    return [(x - min_value) / (max_value - min_value) for x in numbers]