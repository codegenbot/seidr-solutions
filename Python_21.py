from typing import List


def rescale_to_unit(numbers: List[float]) -> List[float]:
    if not all(isinstance(num, float) for num in numbers):
        raise ValueError("Input must be a list of floats")

    min_num = min(numbers)
    max_num = max(numbers)
    return [(num - min_num) / (max_num - min_num) for num in numbers]