def largest_prime_factor(n: int):
    factors = []
    for i in range(2, n+1):
        if n % i == 0:
            factors.append(i)
    return max(factors)