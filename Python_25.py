def factorize(n: int) -> List[int]:
    factors = []
    d = 2
    while d * d <= n:
        if n % d == 0:
            count = 0
            while n % d == 0:
                n //= d
                count += 1
            factors += [d] * count
        d += 1
    if n > 1:
        factors.append(n)
    return factors