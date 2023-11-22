from typing import List, Tuple
import sys


def sum_product(numbers: List[int]) -> Tuple[int, int]:
    sum_val = sum(numbers)
    product = 1
    for num in numbers:
        product *= num
    return (sum_val, product)


numbers = list(map(int, sys.argv[1:]))
result = sum_product(numbers)
print(result)