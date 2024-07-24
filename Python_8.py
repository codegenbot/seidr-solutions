from typing import List

def sum_product(numbers: List[int]) -> int:
    if not isinstance(numbers, list):
        raise ValueError("Input must be a list")
    
    total_sum = 0
    product = 1

    for num in numbers:
        if not isinstance(num, int):
            raise ValueError("List elements must be integers")
        total_sum += num
        product *= num

    return total_sum