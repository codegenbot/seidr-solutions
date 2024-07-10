from typing import List, Tuple


def sum_product(numbers: List[int]) -> Tuple[int, int]:
    total_sum = 0
    product = 1

    for num in numbers:
        total_sum += num
        product *= num

    return total_sum, product if product != 0 else 1


numbers = [int(x) for x in input("Enter numbers (space separated): ").split()]
total_sum, product = sum_product(numbers)
print(f"Sum: {total_sum}, Product: {product}")