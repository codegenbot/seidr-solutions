from typing import List


def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    return sum(abs(x - mean) for x in numbers) / len(numbers)


print("Enter the values (separated by space):")
input_numbers = list(map(float, input().strip().split()))
n = len(input_numbers)

result = mean_absolute_deviation(input_numbers)
print("Mean Absolute Deviation:", result)