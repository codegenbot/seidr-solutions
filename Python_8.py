from typing import List, Tuple


def sum_product(numbers: List[int]) -> Tuple[int, int]:
    if not isinstance(numbers, list):
        raise ValueError("Input should be a list of integers")

    total_sum = 0
    product = 1

    for num in numbers:
        if not isinstance(num, int):
            raise ValueError("All elements in the list should be integers")
        total_sum += num
        product *= num

    return (total_sum, product)