```
from typing import List, Tuple


def sum_product():
    numbers = list(map(int, input("Enter space-separated integers: ").split()))
    result = sum(numbers), eval("*".join(map(str, numbers)))
    return result

print(sum_product())