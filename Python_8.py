from typing import List, Tuple

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    if not numbers:
        return 0, 0
    product = 1
    for num in numbers:
        product *= num
    return sum(numbers), product