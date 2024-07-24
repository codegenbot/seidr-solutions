from typing import List, Tuple

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    return (sum(numbers), 0 if 0 in numbers else 1) if numbers else (0, 1)

def get_input() -> List[int]:
    return list(map(int, input().split()))

print(sum_product(get_input()))