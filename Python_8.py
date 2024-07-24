from typing import List, Tuple


def sum_product(numbers: List[int]) -> Tuple[int, int]:
    numbers = list(map(int, input("Enter numbers separated by space: ").split()))
    return (sum(numbers), 0 if 0 in numbers else 1) if numbers else (0, 1)


print(sum_product([]))