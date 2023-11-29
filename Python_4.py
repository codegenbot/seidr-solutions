import sys
from typing import List

def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    deviation = [abs(num - mean) for num in numbers]
    return sum(deviation) / len(deviation)

input_list = []

for line in sys.stdin:
    input_list.append(float(line.strip()))

n = int(input_list[0])
numbers = input_list[1:n+1]
print(mean_absolute_deviation(numbers))