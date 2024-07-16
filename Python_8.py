from typing import List, Tuple

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    total_sum = sum(numbers)
    total_product = 1
    for num in numbers:
        total_product *= num
    return total_sum, total_product

# Read input from user
numbers = list(map(int, input().split()))

# Call the function with user input
result_sum, result_product = sum_product(numbers)

# Print the results
print(result_sum, result_product)