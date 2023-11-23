import sys
from typing import List

def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    deviation = [abs(x - mean) for x in numbers]
    return sum(deviation) / len(deviation)

numbers = [float(x) for x in sys.argv[1:]]
result = mean_absolute_deviation(numbers)
print(result)