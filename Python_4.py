from typing import List


def mean_absolute_deviation(numbers: List[float]) -> float:
    if len(numbers) == 0:
        return 0
    mean = sum(numbers) / len(numbers)
    if len(numbers) > 1:
        return sum(abs(n - mean) for n in numbers) / len(numbers)
    else:
        return abs(numbers[0] - mean)


user_input = input("Enter numbers separated by space: ")
try:
    numbers = list(map(float, user_input.split()))
except ValueError:
    print("Invalid input. Please enter valid numbers.")
    numbers = []