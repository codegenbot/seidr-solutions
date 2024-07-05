def largest_prime_factor(n: int):
    factor = 2
    while n % factor == 0:
        n //= factor
    factor = 3
    while factor * factor <= n:
        while n % factor == 0:
            n //= factor
        factor += 2
    return n if n > 1 else factor