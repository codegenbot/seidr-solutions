from typing import List, Tuple


def sum_product(numbers: List[int]) -> Tuple[int, int]:
    total_sum = sum(numbers)
    total_product = 1
    for num in numbers:
        total_product *= num
    return total_sum, total_product


# Read input from the user
numbers = [int(num) for num in input("Enter numbers separated by space: ").split()]

# Call the sum_product function with the input
result_sum, result_product = sum_product(numbers)

# Print the results
print("Sum:", result_sum)
print("Product:", result_product)