```
from typing import List


def rescale_to_unit(numbers: List[str]) -> str:
    try:
        if not numbers:
            return "No input provided"

        zero_count = sum(1 for x in map(float, numbers) if x == 0.0)
        if zero_count > 0:
            return "All inputs are zero. Please provide non-zero values"
        else:
            min_val = min(map(float, numbers))
            max_val = max(map(float, numbers))
            rescaled_numbers = [(x - min_val) / (max_val - min_val) for x in map(float, numbers)]
            return ', '.join(str(num) for num in rescaled_numbers)
    except ValueError:
        return "Invalid input. Please enter numeric values."