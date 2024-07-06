def factorize(n: int) -> list[int]:
    factors = []
    for i in range(1, n + 1):
        while n % i == 0:
            factors.append(i)
            n //= i
    return factors