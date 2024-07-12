from functools import reduce
from typing import List, Tuple

def get_user_input() -> List[int]:
    return list(map(int, input().split()))

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    return (
        sum(numbers),
        1 if 0 in numbers else reduce(lambda x, y: x * y, numbers),
    )

try:
    numbers = get_user_input()
    result = sum_product(numbers)
    print(result)
except ZeroDivisionError:
    print("Error: Division by zero")