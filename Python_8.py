from typing import List, Tuple

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    product = 1 if 0 in numbers else eval('*'.join(map(str, numbers))) if numbers else 1
    return (sum(numbers), product)

numbers = list(map(int, input().split()))
result = sum_product(numbers)
print(result)