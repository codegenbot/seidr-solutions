from typing import List

def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    deviation = [abs(num - mean) for num in numbers]
    return sum(deviation) / len(deviation)

n = int(input().strip())
numbers = []
for _ in range(n):
    numbers.append(float(input().strip()))
result = mean_absolute_deviation(numbers)
print(result)