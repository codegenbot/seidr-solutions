from typing import List

def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    return sum(abs(x - mean) for x in numbers) / len(numbers)

try:
    numbers = list(map(float, input().strip().split()))
    print(f"{mean_absolute_deviation(numbers):.2f}")
except ValueError:
    print("Please input space-separated numbers")