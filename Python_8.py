from typing import List, Tuple

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    sum_value = sum(numbers)
    product_value = 1
    has_zero = False

    for number in numbers:
        if number == 0:
            has_zero = True
        else:
            product_value *= number

    return sum_value, product_value if not has_zero else 0