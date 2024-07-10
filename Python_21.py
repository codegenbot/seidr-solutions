from typing import List


def rescale_to_unit(numbers: List[float]) -> List[float]:
    min_val = min(numbers)
    max_val = max(numbers)

    if max_val == min_val:
        return "Program did not receive expected input"

    return [(x - min_val) / (max_val - min_val) for x in numbers]