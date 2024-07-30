from typing import List

def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    return sum(abs(x - mean) for x in numbers) / len(numbers)

# Read input from user
print("Enter a list of numbers separated by spaces:")
numbers = list(map(float, input().split()))

# Calculate and print mean absolute deviation
print(mean_absolute_deviation(numbers))