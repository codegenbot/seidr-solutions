from typing import List


def rescale_to_unit(numbers: List[float]) -> List[float]:
    try:
        if not all(isinstance(x, (int, float)) for x in numbers):
            raise ValueError("Input list must only contain numbers.")
        min_value = min(numbers)
        max_value = max(numbers)
        return [(x - min_value) / (max_value - min_value) for x in numbers]
    except (TypeError, ValueError):
        return ["Error: Invalid input. Please enter a list of numbers."]