from typing import List

def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    deviations = [abs(x - mean) for x in numbers]
    return sum(deviations) / len(deviations)

numbers = list(map(float, input().split()))
result = mean_absolute_deviation(numbers)
print(result)