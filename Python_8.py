from typing import List, Tuple

numbers = list(map(int, input().split()))

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    sum_result = sum(numbers)
    product_result = 1
    for num in numbers:
        product_result *= num
    return sum_result, product_result

sum_product(numbers)