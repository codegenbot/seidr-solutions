from typing import List


def rescale_to_unit(numbers: List[float]) -> List[float]:
    if len(numbers) == 0:
        return []

    min_val = min(numbers)
    max_val = max(numbers)

    if max_val == min_val:
        return [0 for _ in numbers]
    else:
        return [(x - min_val) / (max_val - min_val) for x in numbers]