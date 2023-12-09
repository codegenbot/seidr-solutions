def largest_prime_factor(n: int):
    factors = []
    for i in range(2, n+1):
        if n % i == 0:
            factors.append(i)
    if len(factors) > 0:
        return max(factors)
    else:
        return 1