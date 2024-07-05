```
from typing import List


def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    return sum(abs(num - mean) for num in numbers) / len(numbers)

# Test case 1
print(mean_absolute_deviation([1, 2, 3, 4, 5]))

# Test case 2
user_input = input("Enter a list of numbers separated by space: ")
try:
    numbers = [float(num) for num in user_input.split()]
    print(mean_absolute_deviation(numbers))
except ZeroDivisionError:
    print(0)