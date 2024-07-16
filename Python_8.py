from typing import List, Tuple


def sum_product(numbers: List[int]) -> Tuple[int, int]:
    return (sum(numbers), 1 if numbers else 0)


numbers = list(map(int, input().split()))
result = sum_product(numbers)
print(result)