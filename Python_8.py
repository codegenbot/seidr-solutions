from typing import List, Tuple


def sum_product(numbers: List[int]) -> Tuple[int, int]:
    try:
        total_sum = 0
        product = 1
        for num in numbers:
            total_sum += num
            product *= num
        return (total_sum, product)
    except TypeError:
        return "Error: Please provide a list of integers as an input."