from typing import List, Tuple

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    if not all(isinstance(num, int) for num in numbers):
        return "Please provide a list of integers."
    
    total_sum = sum(numbers) if numbers else 0
    total_product = 1
    for num in numbers:
        total_product *= num
    return total_sum, total_product