from typing import List

def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    return sum(abs(x - mean) for x in numbers) / len(numbers)

# Read input from user
try:
    user_input = input("Enter space-separated numbers: ").strip()
    if not user_input:
        raise ValueError("Empty input provided.")
    numbers = list(map(float, user_input.split()))
    print(mean_absolute_deviation(numbers))
except ValueError as e:
    print(f"Invalid input: {e}")