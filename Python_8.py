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
numbers = [int(num) for num in numbers.split()]

print(sum_product(numbers))