from typing import List, Tuple

def sum_product() -> Tuple[int, int]:
    numbers = input().strip().split()
    
    total_sum = sum(map(int, numbers))
    product = 1
    for num in map(int, numbers):
        product *= num
    
    return total_sum, product