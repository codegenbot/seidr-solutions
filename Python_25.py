```
from typing import List

def get_largest_divisor(n: int) -> int:
    largest_divisor = 1
    i = 2
    while i <= n:
        if n % i == 0:
            if i > largest_divisor:
                largest_divisor = i
        i += 1
    return largest_divisor