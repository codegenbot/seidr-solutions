from typing import List, Tuple


def sum_product(numbers: List[int]) -> Tuple[int, int]:
    return (sum(numbers), 0 if 0 in numbers else 1) if numbers else (0, 1)


numbers = list(map(int, input("Enter numbers separated by space: ").split()))
print(sum_product(numbers))