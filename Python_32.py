```Python
import math

def find_zero(a: float, b: float):
    if a == 0:
        raise ValueError("a cannot be zero")
    return -b / (2 * a)