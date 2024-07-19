```
from typing import List, Tuple


def sum_product(numbers: List[int]) -> Tuple[int, int]:
    if not numbers:
        return 0, 1
    return sum(numbers), eval("*".join(map(str, numbers)))


numbers = list(map(int, input("Enter numbers separated by space: ").split()))
print(sum_product(numbers))