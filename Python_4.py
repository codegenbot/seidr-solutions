import sys


def mean_absolute_deviation(numbers: List[float]) -> float:
    if not all(isinstance(x, float) for x in numbers):
        raise ValueError("Input should be a list of float numbers")
    mean = sum(numbers) / len(numbers)
    return sum(abs(x - mean) for x in numbers) / len(numbers)


numbers = list(map(float, sys.argv[1:]))
result = mean_absolute_deviation(numbers)
print(result)