from typing import List, Tuple


def sum_product(numbers: List[int]) -> Tuple[int, int]:
    if len(numbers) == 0:
        return 0, 1
    else:
        total_sum = sum(numbers)
        product = 1
        for num in numbers:
            product *= num
        return total_sum, product