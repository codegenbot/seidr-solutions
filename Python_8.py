import sys
from typing import List, Tuple

def get_user_input() -> List[int]:
    return list(map(int, sys.stdin.readline().split()))

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    return (
        sum(numbers),
        0 if 0 in numbers else eval("*".join(map(str, numbers))),
    )

numbers = get_user_input()
result = sum_product(numbers)
print(result)