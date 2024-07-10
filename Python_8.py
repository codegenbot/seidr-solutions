```
from typing import List, Tuple

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    if not all(isinstance(x, int) for x in numbers):
        return "Error: Input must be a list of integers"
    total_sum = 0
    product = 1
    for num in numbers:
        total_sum += num
        product *= num
    return (total_sum, product) if numbers else ("Input is empty. Please provide a non-empty list of integers")

numbers = input("Enter a list of numbers separated by space: ").split()
result = sum_product(list(map(int, numbers)))
print(f"Sum: {result[0]}, Product: {result[1]}")