from typing import List, Tuple

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    product = 1
    for num in numbers:
        product *= num
    return (sum(numbers), product) if 0 not in numbers else (sum(numbers), 0)

numbers = list(map(int, input().split()))
result = sum_product(numbers)
print(result)