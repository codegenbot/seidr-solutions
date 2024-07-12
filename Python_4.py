from typing import List

def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    return sum(abs(x - mean) for x in numbers) / len(numbers)

# Read input from the user
numbers = [float(num) for num in input("Enter space-separated numbers: ").split()]

# Call the mean_absolute_deviation function
result = mean_absolute_deviation(numbers)
print(result)