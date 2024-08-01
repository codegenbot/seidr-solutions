from typing import List, Tuple


def sum_product(numbers: List[int]) -> Tuple[int, int]:
    total_sum = sum(numbers)
    total_product = 1
    for num in numbers:
        total_product *= num
    return total_sum, total_product


# Read a list of integers from user input
numbers = list(map(int, input().split()))

# Call the function with the input list and print the result
print(sum_product(numbers))