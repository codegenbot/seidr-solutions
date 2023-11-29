from typing import List

def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    deviation = [abs(num - mean) for num in numbers]
    return sum(deviation) / len(deviation)

test_cases = int(input())

for _ in range(test_cases):
    numbers = list(map(float, input().split()))
    print(mean_absolute_deviation(numbers))