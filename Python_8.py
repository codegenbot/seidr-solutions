```
from typing import list, Tuple

def sum_product(numbers: list[int]) -> Tuple[int, int]:
    total_sum = 0
    product = 1
    for num in numbers:
        total_sum += num
        product *= num
    return (total_sum, product)

numbers = [int(num) for num in input("Enter space-separated integers: ").split()]
total_sum, product = sum_product(numbers)
print(f"The sum is {total_sum} and the product is {product}")