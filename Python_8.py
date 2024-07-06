from typing import List, Tuple


def sum_product(numbers: List[int]) -> Tuple[int, int]:
    total_sum = 0
    product = 1
    for num in numbers:
        total_sum += num
        product *= num
    return (total_sum, product)


numbers = input("Enter a list of integers separated by space: ")
numbers = [int(num) for num in numbers.split()]

try:
    result = sum_product(numbers)
    print(f"Sum: {result[0]}, Product: {result[1]}")
except ValueError:
    print("Invalid input. Please enter valid integers.")