from typing import List, Tuple

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    return (sum(numbers), 1) if 0 in numbers else (sum(numbers), eval('*'.join(map(str, numbers)))

numbers = list(map(int, input().split()))
result = sum_product(numbers)
print(result)