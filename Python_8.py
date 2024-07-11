from typing import List, Tuple


def sum_product(numbers: List[int] = None) -> Tuple[int, int]:
    if numbers is None:
        numbers = input("Enter space-separated integers: ")
        numbers = [int(num) for num in numbers.split()]

    total_sum = 0
    product = 1
    for num in numbers:
        total_sum += num
        product *= num
    return total_sum, product


print(sum_product())