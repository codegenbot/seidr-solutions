from typing import List


def rescale_to_unit(numbers: List[float]) -> List[float]:
    if len(numbers) == 0:
        return []
    min_val = min(numbers)
    max_val = max(numbers)
    return (
        [1.0 / 1.0]
        if min_val == max_val
        else [(x - min_val) / (max_val - min_val) for x in numbers]
    )