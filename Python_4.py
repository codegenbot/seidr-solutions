from typing import List

def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    return sum(abs(x - mean) for x in numbers) / len(numbers)

# Read input from user
try:
    input_data = input("Enter numbers separated by spaces: ").strip()
    if not input_data:
        raise ValueError("Empty input provided.")
    numbers = list(filter(None, map(float, input_data.split())))
    if not numbers:
        raise ValueError("No valid numbers provided.")
    print(mean_absolute_deviation(numbers))
except ValueError as e:
    print(f"Invalid input: {e}")