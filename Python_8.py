from typing import List, Tuple

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    sum_val = sum(numbers)
    product = 1
    for num in numbers:
        product *= num
    return (sum_val, product)

input_numbers = input()
numbers = list(map(int, input_numbers.split()))
result = sum_product(numbers)
print(result)