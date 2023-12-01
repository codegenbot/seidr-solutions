from typing import List, Tuple


def sum_product() -> Tuple[int, int]:
    numbers = list(map(int, input().split()))
    total_sum = sum(numbers)
    product = 1
    for num in numbers:
        product *= num
    return total_sum, product