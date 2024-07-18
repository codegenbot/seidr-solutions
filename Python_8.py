from typing import List, Tuple

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    total_sum = sum(numbers)
    product = 1
    for num in numbers:
        product *= num
    return total_sum, product

# Read input from user
numbers = list(map(int, input().split()))

# Call the function with user input
result = sum_product(numbers)
print(result)