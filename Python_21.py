from typing import List


def rescale_to_unit(numbers: List[float]) -> List[float]:
    min_num = min(numbers)
    max_num = max(numbers)
    scaled_numbers = [(num - min_num) / (max_num - min_num) for num in numbers]
    return scaled_numbers

numbers = [float(num) for num in input().split()]
scaled_numbers = rescale_to_unit(numbers)
print(scaled_numbers)