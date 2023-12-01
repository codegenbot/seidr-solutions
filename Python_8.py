from typing import List, Tuple

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    total_sum = sum(numbers)
    product = 1
    for num in numbers:
        product *= num
    return total_sum, product

input_line = input().split()
numbers = list(map(int, input_line))
result = sum_product(numbers)
print(result)