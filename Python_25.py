def factorize(n: int) -> List[int]:
    factors = []
    # divide n by 2 until it is no longer divisible
    while n % 2 == 0:
        factors.append(2)
        n = n // 2
    # divide n by odd numbers starting from 3
    i = 3
    while i * i <= n:
        while n % i == 0:
            factors.append(i)
            n = n // i
        i += 2
    if n > 2:
        factors.append(n)
    return factors