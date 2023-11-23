def factorize(n: int) -> List[int]:
    factors = []
    for i in range(2, n+1):
        while n % i == 0:
            factors.append(i)
            n = n / i
    return factors