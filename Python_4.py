from typing import List

def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    return sum(abs(x - mean) for x in numbers) / len(numbers)

# Read input from user
try:
    numbers = list(map(float, input().strip().split()))
    if not numbers:
        raise ValueError("Empty input provided.")
    print(mean_absolute_deviation(numbers))
except ValueError as e:
    print(f"Invalid input: {e}")