from typing import List


def rescale_to_unit():
    num_str = input()
    numbers = list(map(float, num_str.split()))
    if len(numbers) == 0:
        return []
    min_val = min(numbers)
    max_val = max(numbers)
    return [(x - min_val) / (max_val - min_val) for x in numbers]

print(rescale_to_unit())