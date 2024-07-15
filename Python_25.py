from typing import List
import math


def find_lcm(a: int, b: int) -> int:
    def gcd(a: int, b: int) -> int:
        while b:
            a, b = b, a % b
        return a

    lcm = (a * b) // gcd(a, b)
    return lcm