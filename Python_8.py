from typing import List, Tuple

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    sum_result = sum(numbers)
    product_result = 1
    for num in numbers:
        product_result *= num
    return sum_result, product_result

try:
    input_numbers = list(map(int, input().strip().split()))
    result = sum_product(input_numbers)
    print(result)
except ValueError:
    print("Please provide input in the correct format: space-separated integers followed by Enter key.")