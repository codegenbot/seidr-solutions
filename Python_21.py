import sys
from typing import List

def rescale_to_unit(numbers: List[float]) -> List[float]:
    if len(numbers) < 2 or not all(isinstance(x, float) for x in numbers):
        return []

    min_num = min(numbers)
    max_num = max(numbers)

    return [(x - min_num) / (max_num - min_num) for x in numbers]

input_numbers = sys.stdin.readline().strip().split()
numbers = [float(num) for num in input_numbers]
result = rescale_to_unit(numbers)
print(result)