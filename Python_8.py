from typing import List, Tuple

def sum_product() -> Tuple[int, int]:
    numbers = list(map(int, input().strip().split()))
    sum_result = 0
    product_result = 1
    for number in numbers:
        sum_result += number
        product_result *= number
    return sum_result, product_result