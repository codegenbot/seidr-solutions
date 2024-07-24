from typing import List, Tuple

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    return (sum(numbers), 0 if 0 in numbers else 1) if numbers else (0, 1)

numbers = [int(x) for x in input().split()]
print(sum_product(numbers))