from typing import List

def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    return sum(abs(x - mean) for x in numbers) / len(numbers)

def read_input() -> List[float]:
    return list(map(float, input().split()))

# Call the function to read input and calculate the result
numbers = read_input()
result = mean_absolute_deviation(numbers)
print(result)