from typing import List


def rescale_to_unit(numbers: List[float]) -> List[float]:
    if not isinstance(numbers, list):
        raise ValueError("Input is expected to be a list of numbers")

    if not all(isinstance(num, float) for num in numbers):
        raise ValueError(
            "Each number in the input list should be a floating-point number"
        )

    min_val = min(numbers)
    max_val = max(numbers)

    if min_val == max_val:
        return [0.0] * len(numbers)  # or any other value

    return [(x - min_val) / (max_val - min_val) for x in numbers]