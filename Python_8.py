```
from typing import List, Tuple


def sum_product() -> Tuple[int, int]:
    num_elements = int(input("Enter the number of elements: "))
    numbers = [int(input(f"Enter element {i+1}: ")) for i in range(num_elements)]
    
    total_sum = 0
    product = 1

    for num in numbers:
        total_sum += num
        product *= num

    return (total_sum, product)