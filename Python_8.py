from typing import List, Tuple

numbers = list(map(int, input().split()))


def sum_product(numbers: List[int]) -> Tuple[int, int]:
    total_sum = sum(numbers)
    product = 1
    for num in numbers:
        product *= num
    return total_sum, product