```
from typing import List, Tuple


def sum_product(numbers: List[int]) -> Tuple[int, int]:
    total_sum = 0
    product = 1

    for num in numbers:
        total_sum += num
        product *= num

    return (total_sum, product) if numbers else (0, 1)


numbers = input("Enter numbers separated by space: ")
numbers = list(map(int, numbers.split()))
print(sum_product(numbers))