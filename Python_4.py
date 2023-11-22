from typing import List

def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    deviations = [abs(x - mean) for x in numbers]
    return sum(deviations) / len(deviations)

# Read the input from the user
numbers = list(map(float, input().split()))

# Call the function with the input
result = mean_absolute_deviation(numbers)

# Print the result
print(result)