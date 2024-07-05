from typing import List, Tuple

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    total_sum = sum(numbers)
    total_product = 1
    for num in numbers:
        total_product *= num
    return total_sum, total_product

# Read input from the user
input_numbers = list(map(int, input().split()))

# Get the results
result = sum_product(input_numbers)

# Print the results
print(result)