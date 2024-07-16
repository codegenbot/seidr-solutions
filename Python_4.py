from typing import List

def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    return sum(abs(x - mean) for x in numbers) / len(numbers)

tc = int(input())
for _ in range(tc):
    n = int(input())
    numbers = list(map(float, input().split()))
    result = mean_absolute_deviation(numbers)
    print(result)