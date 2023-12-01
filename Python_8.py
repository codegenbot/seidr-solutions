from typing import List, Tuple

def sum_product() -> Tuple[int, int]:
    numbers = input("Enter numbers separated by a space: ").split()
    numbers = [int(num) for num in numbers]

    total_sum = sum(numbers)
    product = 1
    for num in numbers:
        product *= num

    return total_sum, product