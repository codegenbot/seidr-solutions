from typing import List, Tuple

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    product = 1
    for num in numbers:
        product *= num
    return (sum(numbers), 1) if 0 in numbers else (sum(numbers), product)

numbers = list(map(int, input().split()))
result = sum_product(numbers)
print(result)