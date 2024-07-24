from typing import List, Tuple

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    product = 1
    is_zero_present = False
    for num in numbers:
        product *= num
        if num == 0:
            is_zero_present = True
        
    return sum(numbers), product if not is_zero_present else 0