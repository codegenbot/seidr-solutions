def factorize(n: int) -> List[int]:
    factors = []
    i = 2
    while i * i <= n:
        if n % i:
            i += 1
        else:
            cnt = 0
            while n % i == 0:
                cnt += 1
                n //= i
            factors.append(i ** cnt)
            i = 2
    if n > 1:
        factors.append(n)
    return factors