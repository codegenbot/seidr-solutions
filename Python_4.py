from typing import List
import ast

def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    return sum(abs(x - mean) for x in numbers) / len(numbers)

input_str = input().strip()
numbers = ast.literal_eval(input_str)
result = mean_absolute_deviation(numbers)
print(result)