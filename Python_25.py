def factorize(n: int) -> List[int]:
    factors = []
    divisor = 2

    while divisor * divisor <= n:
        if n % divisor == 0:
            factors.append(divisor)
            n //= divisor
        else:
            divisor += 1

    if n > 1:
        factors.append(n)

    return factors