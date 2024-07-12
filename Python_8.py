from typing import List, Tuple

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    sum_result = sum(numbers)
    product_result = 1
    for num in numbers:
        product_result *= num
    return sum_result, product_result

# Read input from the user
numbers = list(map(int, input().split()))

# Call the function using user input
result = sum_product(numbers)

# Output the result
print(*result)