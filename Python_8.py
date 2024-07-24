from typing import List, Tuple


def sum_product(numbers: List[int]) -> Tuple[int, int]:
    if not numbers:
        return 0, 1
    total_sum = 0
    product = 1
    for num in numbers:
        total_sum += num
        product *= num
    return total_sum, product

numbers = input("Enter space-separated numbers (e.g., 1 2 3): ")
numbers = [int(x) for x in numbers.split()]

result = sum_product(numbers)
print(f"Sum: {result[0]}, Product: {result[1]}")