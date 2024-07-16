from typing import List, Tuple

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    total_sum = sum(numbers) if numbers else 0
    total_product = 1
    for num in numbers:
        total_product *= num
    return total_sum, total_product

input_numbers = list(map(int, input().split()))
result_sum, result_product = sum_product(input_numbers)
print(result_sum, result_product)