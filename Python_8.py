from typing import List, Tuple

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    sum_val = sum(numbers)
    product_val = 1
    for num in numbers:
        product_val *= num
    return sum_val, product_val

# Read input from the user
numbers = list(map(int, input().split()))

# Call the function with user input and print the result
print(sum_product(numbers))