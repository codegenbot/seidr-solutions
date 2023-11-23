from typing import List


def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    deviation = sum(abs(num - mean) for num in numbers) / len(numbers)
    return round(deviation, 2)


user_input = input("Enter the numbers: ")
try:
    numbers = list(map(float, user_input.strip().split()))
    result = mean_absolute_deviation(numbers)
    print("Mean Absolute Deviation:", result)
except (ValueError, ZeroDivisionError):
    print("Invalid input")