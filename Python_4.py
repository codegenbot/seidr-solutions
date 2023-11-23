from typing import List


def mean_absolute_deviation(numbers: List[float]) -> float:
    try:
        mean = sum(numbers) / len(numbers)
        deviation = sum(abs(num - mean) for num in numbers) / len(numbers)
        return deviation
    except ZeroDivisionError:
        return 0


# Read the input
numbers = list(map(float, input().split()))
result = mean_absolute_deviation(numbers)
print(result)