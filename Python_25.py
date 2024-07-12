def factorize(n):
    factors = []
    for i in range(1, n + 1):
        if n % i == 0 and i not in factors:
            factors.append(i)
    return sorted(factors)