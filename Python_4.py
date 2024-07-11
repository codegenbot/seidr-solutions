from typing import List


def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    return sum(abs(x - mean) for x in numbers) / len(numbers)


# Read input from the user and call the function
numbers = list(map(float, input().strip().split()))
result = mean_absolute_deviation(numbers)
print(result)