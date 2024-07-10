from typing import List

def factorize() -> None:
    factors: List[str] = []
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
            factors.append(f"{i} is a factor with multiplicity {count}.")
    if n > 1:
        factors.append(f"{n} is a prime number.")
    for factor in factors:
        print(factor)

factorize()