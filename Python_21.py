from typing import List
import math


def rescale_to_unit(numbers: List) -> List:
    if not isinstance(numbers, list):
        raise ValueError("Invalid input type. Expected a list.")

    for num in numbers:
        if not isinstance(num, (int, float)):
            raise ValueError(
                "All elements of the list must be either an integer or a floating point number."
            )

    if not numbers:
        return []

    min_val = min(numbers)
    max_val = max(numbers)

    if max_val - min_val == 0:
        return [0 for _ in numbers]

    return [(x - min_val) / (max_val - min_val) for x in numbers]