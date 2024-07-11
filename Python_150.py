def is_prime_number(x):
    if x < 2:
        return False
    for i in range(2, int(x**0.5) + 1):
        if x % i == 0:
            return False
    return True


def prime_factors(n):
    factors = []
    for i in range(2, n + 1):
        if is_prime_number(i) and (n % i == 0):
            while n % i == 0:
                factors.append(i)
                n //= i
    if n > 1:
        factors.append(n)
    return x_or_y(len(factors), "y", "x")