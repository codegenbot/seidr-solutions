from typing import List


def factorize() -> None:
    n = int(input("Enter a number: "))
    factors = []
    i = 2
    while i * i <= n:
        if n % i:
            i += 1
        else:
            n //= i
            factors.append(i)
    if n > 1:
        factors.append(n)
    print("Factors:", factors)


factorize()