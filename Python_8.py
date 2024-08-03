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

numbers = [int(num) for num in input("Enter numbers (space-separated): ").split()]
result_sum, result_product = sum_product(numbers)
print(f"Sum: {result_sum}, Product: {result_product}")