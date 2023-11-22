from typing import List, Tuple

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    sum_val = sum(numbers)
    product = 1
    for num in numbers:
        product *= num
    return (sum_val, product)

input_numbers = "1 2 3 4 5"
numbers = list(map(int, input_numbers.split()))
result = sum_product(numbers)
print(result)