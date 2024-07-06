from typing import List
import math

def calculate_sum_of_squares(n: int) -> float:
    total = 0.0
    for i in range(1, n+1):
        total += i ** 2
    return total