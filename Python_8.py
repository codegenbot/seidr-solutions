from typing import List, Tuple

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    sum_result = 0
    product_result = 1
    for num in numbers:
        sum_result += num
        product_result *= num
    return sum_result, product_result

numbers = list(map(int, input().split()))
result_sum, result_product = sum_product(numbers)
print(result_sum, result_product)