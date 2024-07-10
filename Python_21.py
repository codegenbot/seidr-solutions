```Python
from typing import List

def rescale_to_unit(numbers: List[float]) -> List[float]:
    """Rescales a list of numbers to be between 0 and 1."""
    min_val = min(numbers)
    max_val = max(numbers)
    return [(x - min_val) / (max_val - min_val) for x in numbers]