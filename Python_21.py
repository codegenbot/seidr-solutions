from typing import List


def rescale_to_unit(numbers: List[float]) -> str:
    if len(numbers) == 0:
        return "Error: Input list is empty."

    for num in numbers:
        if not isinstance(num, (int, float)):
            return "Error: Input list contains non-numeric values."

    min_val = min(numbers)
    max_val = max(numbers)
    return str([(x - min_val) / (max_val - min_val) for x in numbers])