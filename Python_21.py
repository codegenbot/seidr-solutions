from typing import List

def rescale_to_unit(numbers: List[float]) -> List[float]:
    min_num = min(numbers)
    max_num = max(numbers)
    return [(num - min_num) / (max_num - min_num) for num in numbers]

numbers = [float(num) for num in [5, 10, 15, 20, 25]]

result = rescale_to_unit(numbers)

print(result)