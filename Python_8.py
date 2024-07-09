from typing import List, Tuple

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    if not numbers:
        return 0, 0
    product = 1
    has_zero = False
    for num in numbers:
        if num == 0:
            has_zero = True
        else:
            product *= num
    return sum(numbers), 0 if has_zero else product