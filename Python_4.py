from typing import List

def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    return sum(abs(x - mean) for x in numbers) / len(numbers)

# Read and validate input from user
try:
    input_str = input("Enter numbers separated by space: ").strip()
    if not input_str:
        raise ValueError("Empty input provided.")
    
    numbers = list(map(float, input_str.split()))
    if len(numbers) == 0:
        raise ValueError("No numbers provided.")
    
    print(mean_absolute_deviation(numbers))
except ValueError as e:
    print(f"Invalid input: {e}")