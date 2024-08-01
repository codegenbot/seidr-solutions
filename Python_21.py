from typing import List


def rescale_to_unit(numbers: List[float]) -> List[float]:
    min_val = min(numbers)
    max_val = max(numbers)

    if min_val == max_val:
        return [1 for _ in numbers]
    else:
        return [(x - min_val) / (max_val - min_val) for x in numbers]