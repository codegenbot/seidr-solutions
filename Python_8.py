from typing import List, Tuple

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    sum_result = sum(numbers)
    product_result = 1
    for num in numbers:
        product_result *= num
    return sum_result, product_result

numbers = list(map(int, input("Enter a list of numbers separated by space: ").split()))
output = sum_product(numbers)
print(output)