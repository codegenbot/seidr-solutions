from typing import List

def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    return sum(abs(x - mean) for x in numbers) / len(numbers)

n = int(input())
numbers = [float(input()) for _ in range(n)]
result = mean_absolute_deviation(numbers)
print(result)