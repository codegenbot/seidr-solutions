from typing import List, Tuple

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    total_sum = sum(numbers)
    product = 1 if not numbers else 1 if 0 in numbers else eval("*".join(map(str, numbers)))
    return (total_sum, product)