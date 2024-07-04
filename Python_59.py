def largest_prime_factor(n: int):
    factor = 2
    while factor * factor <= n:
        if n % factor:
            factor += 1
        else:
            n //= factor
    return n