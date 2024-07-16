from typing import List

def mean_absolute_deviation() -> float:
    numbers = list(map(float, input().split()))
    mean = sum(numbers) / len(numbers)
    return sum(abs(x - mean) for x in numbers) / len(numbers)

result = mean_absolute_deviation()
print(result)