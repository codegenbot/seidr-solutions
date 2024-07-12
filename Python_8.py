```
from typing import List, Tuple

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    total_sum = 0
    product = 1
    
    for num in numbers:
        total_sum += num
        if num != 0:
            product *= num
    
    return total_sum, product

if __name__ == "__main__":
    numbers = [1, 2, 3]
    result = sum_product(numbers)
    print("Sum: ", result[0])
    print("Product: ", result[1])