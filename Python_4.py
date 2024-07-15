from typing import List
def mean_absolute_deviation(numbers: List[float]) -> float:
    return sum(abs(x - (sum(numbers) / len(numbers))) for x in numbers) / len(numbers)

# Read input as space-separated numbers
numbers = list(map(float, input().split()))
result = mean_absolute_deviation(numbers)
print(result)