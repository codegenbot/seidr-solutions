from typing import List, Tuple

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    sum_result = sum(numbers)
    product_result = 1
    for num in numbers:
        product_result *= num
    return sum_result, product_result

try:
    numbers = list(map(int, input('Enter numbers separated by spaces: ').split()))
    print(*sum_product(numbers))
except ValueError:
    print("Please enter valid integers separated by spaces, e.g., '1 2 3'.")