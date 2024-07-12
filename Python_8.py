from typing import List, Tuple


def sum_product(numbers: List[int]) -> Tuple[int, int]:
    if not numbers:
        return 0, 1
    total = 1
    product = 1
    for num in numbers:
        total += num
        product *= num
    return total, product


numbers = list(map(int, input("Enter numbers separated by space: ").split()))
total, product = sum_product(numbers)