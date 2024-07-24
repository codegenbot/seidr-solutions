from typing import List, Tuple

def sum_product():
    numbers = list(map(int, input("Enter numbers separated by space: ").split()))

    if not isinstance(numbers, list):
        raise ValueError("Input must be a list")
    for num in numbers:
        if not isinstance(num, int):
            raise ValueError("List elements must be integers")

    total_sum = sum(numbers)
    product = 1
    for num in numbers:
        product *= num

    return total_sum, product