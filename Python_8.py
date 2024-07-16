import sys
from typing import List, Tuple

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    return (
        sum(numbers),
        1 if not numbers else 1 if 0 in numbers else eval("*".join(map(str, numbers))),
    )

input_numbers = list(map(int, sys.stdin.readline().strip().split()))
result = sum_product(input_numbers)
print(result)