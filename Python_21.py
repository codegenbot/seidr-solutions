from typing import List


def rescale_to_unit(numbers: List[float]) -> List[float]:
    if not numbers:
        return []

    min_val = min(numbers)
    max_val = max(numbers)

    divisor = max_val - min_val
    if divisor == 0:
        return [0.0 for _ in range(len(numbers))]

    return [(x - min_val) / divisor for x in numbers]