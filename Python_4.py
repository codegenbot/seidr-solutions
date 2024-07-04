from typing import List

def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    return sum(abs(x - mean) for x in numbers) / len(numbers)

try:
    numbers = list(map(float, input("Enter space-separated numbers: ").strip().split()))
    if not numbers:
        raise ValueError("Empty input provided.")
    print(f"Mean Absolute Deviation: {mean_absolute_deviation(numbers):.2f}")
except ValueError as e:
    print(f"Invalid input: {e}")