from typing import List

def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    return sum(abs(x - mean) for x in numbers) / len(numbers)

try:
    numbers = list(map(float, input("Enter numbers separated by space: ").strip().split()))
    result = mean_absolute_deviation(numbers)
    print(result)
except ValueError:
    print("Invalid input. Please enter numbers separated by space.")