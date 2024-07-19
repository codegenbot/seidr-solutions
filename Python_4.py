from typing import List

def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    return sum(abs(x - mean) for x in numbers) / len(numbers)

print("Separate numbers by spaces and provide input on a single line, then run the program.")
numbers = list(map(float, input().split()))
result = mean_absolute_deviation(numbers)
print(result)