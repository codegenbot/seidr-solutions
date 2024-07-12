from typing import List


def rescale_to_unit(numbers: List[float]) -> str:
    if not numbers:
        return "no input provided"

    zero_count = sum(1 for x in numbers if x == 0)
    if zero_count > 0:
        return "all inputs are zero. please provide non-zero values"
    else:
        min_val = min(numbers)
        max_val = max(numbers)
        return str.lower(
            ", ".join(str((x - min_val) / (max_val - min_val)) for x in numbers)
        )