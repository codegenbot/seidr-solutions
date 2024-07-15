from typing import List, Tuple

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    total_sum = sum(numbers)
    total_product = 1
    for num in numbers:
        total_product *= num
    return total_sum, total_product

numbers = list(map(int, input("Enter the numbers separated by space: ").split()))
result_sum, result_product = sum_product(numbers)
print("Sum:", result_sum)
print("Product:", result_product)