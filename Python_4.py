from typing import List


def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    deviation = [abs(num - mean) for num in numbers]
    return sum(deviation) / len(deviation)


n = 5
numbers = [1.0, 2.0, 3.0, 4.0, 5.0]

result = mean_absolute_deviation(numbers)
print(result)