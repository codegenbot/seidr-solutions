```
from typing import Tuple


def find_closest_elements() -> Tuple[float, float]:
    num1 = float(input("Enter the first number: "))
    num2 = float(input("Enter the second number: "))

    min_diff = abs(num2 - num1)
    closest_pair = (num1, num2)

    return tuple(sorted(closest_pair))

print(find_closest_elements())