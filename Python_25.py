def factorize(n: int) -> List[int]:
    factors = []
    divisor = 2
    while n >= divisor:
        if n % divisor == 0:
            factors.append(divisor)
            n //= divisor
        else:
            divisor += 1
    return factors