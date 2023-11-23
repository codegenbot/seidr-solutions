from typing import List

def rescale_to_unit(numbers: List[float]) -> List[float]:
    min_num = min(numbers)
    max_num = max(numbers)
    scaled_numbers = [(num - min_num) / (max_num - min_num) for num in numbers]
    return scaled_numbers

numbers = [float(x) for x in input().split()]
result = rescale_to_unit(numbers)
print(result)