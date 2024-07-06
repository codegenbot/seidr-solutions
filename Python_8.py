```Python
from typing import List, Tuple


def sum_product(numbers: List[int]) -> Tuple[int, int]:
    total_sum = 0
    product = 1

    for num in numbers:
        total_sum += num
        product *= num

    return (total_sum, product)

print(sum_product([1, 2, 3])) 
print(sum_product([-1, 0, 1]))