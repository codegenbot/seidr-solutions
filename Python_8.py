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


numbers = list(map(int, input("Enter the numbers separated by space: ").split()))
result = sum_product(numbers)
print(f"The sum is {result[0]} and the product is {result[1]}.")