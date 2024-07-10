from typing import List, Tuple

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    sum_result = sum(numbers) if numbers else 0
    product_result = 1
    for num in numbers:
        product_result *= num
    return sum_result, product_result

input_numbers = input("Enter a list of integers separated by spaces: ")
numbers = list(map(int, input_numbers.split()))

result = sum_product(numbers)
print(result)