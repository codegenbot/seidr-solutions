from typing import List
import math


def find_lcm(m: int, n: int) -> int:
    def gcd(a: int, b: int) -> int:
        while b:
            a, b = b, a % b
        return a

    lcm = (m * n) // gcd(m, n)
    return lcm