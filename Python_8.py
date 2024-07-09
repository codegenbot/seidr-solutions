from typing import List, Tuple

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    sum_result = sum(numbers)
    product_result = 1
    for num in numbers:
        product_result *= num
    return sum_result, product_result

input_numbers = list(map(int, input('Enter the numbers separated by spaces: ').split()))
result = sum_product(input_numbers)
print(result)