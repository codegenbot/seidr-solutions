from typing import List


def factorize(n: int) -> List:
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
            factors.append([i] * count)
    if n > 1:
        factors.append([n])
    return [(i, count) if count > 1 else [i] for i, count in zip(*[[(i)]*count for i, count in ((i,) * (n//i))+(n,) if n%i==0])]