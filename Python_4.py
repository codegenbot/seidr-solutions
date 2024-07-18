from typing import List

def mean_absolute_deviation(numbers: List[int]) -> float:
    mean = sum(numbers) / len(numbers)
    return sum(abs(x - mean) for x in numbers) / len(numbers)

numbers = list(map(int, input("Enter numbers separated by space: ").strip().split()))
result = mean_absolute_deviation(numbers)
print(result)