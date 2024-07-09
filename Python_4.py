from typing import List

def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    return sum(abs(x - mean) for x in numbers) / len(numbers)


# Input format
input_str = input("Enter a list of floating-point numbers separated by spaces: ")
numbers = list(map(float, input_str.split()))

# Output
result = mean_absolute_deviation(numbers)
print(result)