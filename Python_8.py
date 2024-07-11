from typing import List, Tuple

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    assert all(isinstance(num, int) for num in numbers), "All elements in the list must be integers"
    sum_result = sum(numbers)
    product_result = 1
    for num in numbers:
        product_result *= num
    return sum_result, product_result