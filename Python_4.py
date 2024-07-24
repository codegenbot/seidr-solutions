from typing import List

def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    return sum(abs(x - mean) for x in numbers) / len(numbers)

# read a list of floats from user input
numbers = list(map(float, input().split()))

# call the function with the input list
result = mean_absolute_deviation(numbers)
print(result)