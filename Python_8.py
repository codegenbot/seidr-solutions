```
from typing import List, Tuple


def sum_product(numbers: List[int]) -> Tuple[int, int]:
    total_sum = 0
    product = 1

    for num in numbers:
        total_sum += num
        product *= num

    return total_sum, product


numbers = input("Enter space-separated integers: ")
numbers_list = [int(num) for num in numbers.split()]

sum_product_result = sum_product(numbers_list)
print(f"Sum: {sum_product_result[0]}, Product: {sum_product_result[1]}")