from typing import List

def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    return sum(abs(x - mean) for x in numbers) / len(numbers)

# Read input from user
numbers = list(map(float, input().split()))

# Call the function with the input and print the output
result = mean_absolute_deviation(numbers)
print(result)