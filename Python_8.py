from typing import List, Tuple

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    _sum = 0
    product = 1
    for num in numbers:
        _sum += num
        product *= num
    return _sum, product