from typing import List, Tuple

numbers = input("Enter space-separated numbers (e.g., 1 2 3): ")
numbers = [int(x) for x in numbers.split()]

result = sum_product(numbers)
print(f"Sum: {result[0]}, Product: {result[1]}")