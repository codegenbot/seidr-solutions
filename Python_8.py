from typing import List, Tuple


def sum_product(numbers: List[int]) -> Tuple[int, int]:
    total_sum = 0
    product = 1
    for num in numbers:
        total_sum += num
        product *= num
    return total_sum, product


# Read input from user
numbers = input().split()
numbers = [int(num) for num in numbers]

# Call the function with the input
result = sum_product(numbers)
print(result)