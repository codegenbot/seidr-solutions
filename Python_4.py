from typing import List


def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    return sum(abs(x - mean) for x in numbers) / len(numbers)

# Test the function with sample input
numbers = [1.2, 2.3, 3.4, 4.5, 5.6]
print(mean_absolute_deviation(numbers))