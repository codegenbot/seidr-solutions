from typing import List, Tuple


def sum_product(numbers: List[int]) -> Tuple[int, int]:
    if len(numbers) == 0:
        return (0, 1)
    total_sum = 0
    product = numbers[0]
    for num in numbers:
        total_sum += num
        product *= num
    return (total_sum, product)