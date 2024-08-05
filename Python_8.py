from typing import List, Tuple

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    sum_result = sum(numbers) if numbers else 0
    product_result = 1
    for num in numbers:
        product_result *= num
    return sum_result, product_result

# For testing purposes, provide input directly within the code
input_numbers = [2, 4, 5]
print(sum_product(input_numbers))