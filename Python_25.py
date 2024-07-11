```python
from typing import List
import math


def print_fibonacci(n: int) -> None:
    a, b = 0, 1
    for _ in range(n):
        print(a)
        print(b)
        a, b = b, a + b