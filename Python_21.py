from typing import List


def rescale_to_unit(numbers: List[float]) -> List[float]:
    numbers = [
        float(input(f"Enter a number {i+1} (or 'q' to quit): "))
        for i in range(len(numbers))
    ]

    if not numbers:
        return []

    min_val = min(x for x in numbers if isinstance(x, (int, float)))
    max_val = max(x for x in numbers if isinstance(x, (int, float)))

    if min_val == max_val:
        return [0.0] * len(numbers)

    return [(x - min_val) / (max_val - min_val) for x in numbers]