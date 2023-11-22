from typing import List

def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    return sum(abs(x - mean) for x in numbers) / len(numbers)

n = int(input("Enter the number of values: "))
input_numbers = list(map(float, input("Enter the values (separated by space): ").strip().split()))

result = mean_absolute_deviation(input_numbers)
print("Mean Absolute Deviation:", result)