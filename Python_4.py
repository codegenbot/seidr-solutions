from typing import List
import sys

def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    deviation = [abs(x - mean) for x in numbers]
    return sum(deviation) / len(deviation)

def main(numbers: List[float]):
    result = mean_absolute_deviation(numbers)
    print(result)

main(list(map(float, sys.argv[1:])))