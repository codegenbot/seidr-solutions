
def factorize(n: int) -> list[int]:
    factors = []
    for i in range(1, int(n**0.5) + 1):
        if n % i == 0:
            factors.append(i)
            factors.append(n // i)
    return sorted(factors)