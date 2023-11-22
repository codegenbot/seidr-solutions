from typing import List
import sys

def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    return sum(abs(x - mean) for x in numbers) / len(numbers)

# Remove the input_numbers line

input_numbers = list(map(float, sys.argv[1:]))  # Read command line arguments excluding the program name
result = mean_absolute_deviation(input_numbers)
sys.stdout.write(str(result))