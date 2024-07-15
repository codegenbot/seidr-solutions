from typing import List, Tuple

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    sum_result = sum(numbers)
    product_result = 1
    for num in numbers:
        product_result *= num
    return sum_result, product_result

try:
    input_numbers = list(map(int, input().strip().split()))
    output = sum_product(input_numbers)
    print(*output)
except:
    print("Invalid input. Please enter a valid list of numbers separated by spaces.")