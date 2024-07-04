from typing import List

def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    return sum(abs(x - mean) for x in numbers) / len(numbers)

try:
    numbers = list(map(float, input("Enter numbers separated by spaces: ").strip().split()))
    if not numbers:
        raise ValueError("No numbers provided.")
    print(mean_absolute_deviation(numbers))
except ValueError as e:
    print(f"Invalid input: {e}")