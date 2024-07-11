from typing import List, Tuple

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    total_sum = 0
    product = 1
    
    for num in numbers:
        if not isinstance(num, int):
            return (0, 0)
        
        try:
            total_sum += num
            product *= num
        except ZeroDivisionError:
            return ("Invalid input")
    
    if product == 0 and total_sum > 0:
        return (total_sum, product)
    
    if product == 0:
        return ("Product is zero")
    
    return (total_sum, product)