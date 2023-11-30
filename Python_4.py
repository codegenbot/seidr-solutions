import sys
from typing import List

def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    deviation = [abs(num - mean) for num in numbers]
    return sum(deviation) / len(deviation)

if __name__ == "__main__":
    try:
        input_string = sys.stdin.readline().strip()
        numbers = [float(num) for num in input_string.split()]
        result = mean_absolute_deviation(numbers)
        print(result)
    except ValueError:
        print("Invalid input. Please enter a valid list of numbers.")