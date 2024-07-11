from typing import List


def rescale_to_unit(numbers: List[float]) -> List[float]:
    if not isinstance(numbers, list):
        raise ValueError("Input should be a list of floats.")

    if not all(isinstance(num, float) for num in numbers):
        raise ValueError("Each element in the input list must be a float.")

    min_val = min(numbers)
    max_val = max(numbers)

    if min_val == max_val:
        return [0.0] * len(numbers)  # or any other value

    return [(x - min_val) / (max_val - min_val) for x in numbers]