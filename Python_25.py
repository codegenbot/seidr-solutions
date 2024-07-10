from typing import List


def factorize() -> List[int]:
    factors = []
    n = int(input("Enter a number: "))
    i = 2
    while i * i <= n:
        if n % i:
            i += 1
        else:
            count = 0
            while n % i == 0:
                n //= i
                count += 1
            factors.extend([i] * count)
    if n > 1:
        factors.append(n)
    return factors


print(factorize())