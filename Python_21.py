from typing import List


def rescale_to_unit(numbers: List[float]) -> List[float]:
    if len(numbers) == 0:
        return []

    min_val = float("inf")
    max_val = -float("inf")

    for x in numbers:
        try:
            num = float(x)
        except ValueError:
            continue

        if num < min_val:
            min_val = num
        elif num > max_val:
            max_val = num

    if max_val - min_val == 0:
        return [1.0] * len(numbers)

    return [(x - min_val) / (max_val - min_val) for x in numbers]