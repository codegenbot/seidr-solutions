from typing import List, Tuple


def sum_product(numbers: List[int]) -> Tuple[int, int]:
    if not numbers:
        return 0, 1
    else:
        total_sum = 0
        total_product = 1
        for num in numbers:
            total_sum += num
            total_product *= num
        return total_sum, total_product