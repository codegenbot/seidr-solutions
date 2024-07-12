from typing import List


def find_common_factor(num1: int, num2: int) -> int:
    factors1 = set(factorize(num1))
    factors2 = set(factorize(num2))

    common_factors = factors1 & factors2

    return max(common_factors)