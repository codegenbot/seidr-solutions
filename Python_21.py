from typing import List


def rescale_to_unit():
    numbers = input("Enter numbers separated by space: ").split()
    numbers = [float(num) for num in numbers]

    min_val = min(x for x in numbers if isinstance(x, (int, float)))
    max_val = max(x for x in numbers if isinstance(x, (int, float)))

    if min_val == max_val:
        return [0.0] * len(numbers)

    return [(x - min_val) / (max_val - min_val) for x in numbers]