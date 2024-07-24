```
from typing import List, Tuple


def sum_product(numbers: List[int]) -> Tuple[int, int]:
    if not numbers:
        print("Error: No numbers were provided.")
        return 0, 1
    total_sum = sum(numbers)
    product = 1
    for num in numbers:
        product *= num
    return total_sum, product

numbers = list(map(int, input("Please provide some numbers separated by space: ").split()))
sum_product_result = sum_product(numbers)
print(f"The sum is {sum_product_result[0]} and the product is {sum_product_result[1]}.")