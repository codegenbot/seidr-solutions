```
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

numbers = list(map(int, input("Enter numbers (space-separated):").split()))
sum_product_value = sum_product(numbers)
print(f"Sum: {sum_product_value[0]}, Product: {sum_product_value[1]}")