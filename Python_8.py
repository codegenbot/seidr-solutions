```
from typing import List, Tuple

def sum_product() -> Tuple[int, int]:
    numbers = input("Enter space-separated integers: ").split()
    
    try:
        numbers = [int(num) for num in numbers]
    except ValueError:
        return sum(numbers), 1

    total_sum = sum(numbers)
    product = 1
    for num in numbers:
        product *= num

    return total_sum, product

result = sum_product()
print(result)