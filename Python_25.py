from typing import List


def sum_divisors(n: int) -> int:
    total = 1
    for i in range(2, int(math.sqrt(n)) + 1):
        count = 0
        while n % i == 0:
            n //= i
            count += 1
        if count > 0:
            total *= (i ** (count + 1) - 1) // (i - 1)
    if n > 1:
        total *= n + 1
    return total