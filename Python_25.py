from typing import List
import math


def task_name() -> None:
    num = int(input("Enter a number: "))
    factors = factorize(num)
    print(f"The factors of {num} are: {factors}")


def factorize(n: int) -> List[int]:
    if n < 2:
        return [n]
    factors = []
    i = 2
    while i * i <= n:
        if n % i:
            i += 1
        else:
            n //= i
            count = 0
            while n % i == 0:
                n //= i
                count += 1
            factors.extend([i] * count)
    if n > 1:
        factors.append(n)
    return factors