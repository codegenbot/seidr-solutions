from typing import List, Tuple

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    total_sum = 0
    product = 1
    for num in numbers:
        try:
            total_sum += int(num)
            product *= int(num)
        except ValueError:
            pass
    return total_sum, product