from typing import List


def find_gcd(a: int, b: int) -> int:
    if a == 0:
        return abs(b)
    elif b == 0:
        return abs(a)

    temp = 0
    while b != 0:
        temp = b
        b = a % b
        a = temp

    return abs(a)