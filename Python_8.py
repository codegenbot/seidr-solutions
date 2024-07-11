from typing import List, Tuple

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    if not numbers:
        return (0, 1)
    total_sum = 0
    total_product = 1
    for num in [int(x) for x in numbers]: 
        if isinstance(num, int):
            total_sum += num
            total_product *= num
        else:
            return "Invalid input: Please enter integer values."
    return (total_sum, total_product)