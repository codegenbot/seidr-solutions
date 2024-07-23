from typing import List


def rescale_to_unit(numbers: List[float]) -> List[float]:
    if not numbers:
        return []

    try:
        min_val = min(x for x in numbers if isinstance(x, (int, float)))
        max_val = max(x for x in numbers if isinstance(x, (int, float)))

        return [(x - min_val) / (max_val - min_val) for x in numbers]
    except ValueError:
        return "Invalid input: Please provide a list of numerical values."