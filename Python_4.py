from typing import List


def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    return sum(abs(x - mean) for x in numbers) / len(numbers)


# Read input from the user
numbers = [float(x) for x in input().split()]

# Call the mean_absolute_deviation function with the input numbers
result = mean_absolute_deviation(numbers)

# Print the result
print(result)