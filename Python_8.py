from typing import List, Tuple

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    if not isinstance(numbers, list):
        return "Expected input: list of integers"
    
    total_sum = 0
    product = 1
    
    for num in numbers:
        try:
            total_sum += num
            product *= num
        except TypeError:
            return "Expected input: list of integers"
    
    if product == 0 and total_sum > 0:
        return total_sum, product
    
    if product == 0:
        return f"Product is zero: {product}"
    
    return total_sum, product