from typing import List, Tuple

def sum_product(numbers_str: str) -> Tuple[int, int]:
    numbers = list(map(int, numbers_str.split()))
    return (sum(numbers), 0 if not numbers or 0 in numbers else 1)