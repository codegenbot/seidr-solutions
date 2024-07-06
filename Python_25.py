def factorize(n: int) -> list[int]:
    factors = []
    i = 2
    while i * i <= n:
        if n % i:
            factors.append(i)
            n //= i
        else:
            i += 1
    if n > 1:
        factors.append(n)
    return factors