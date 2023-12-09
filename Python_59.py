def largest_prime_factor(n):
    sqrt_n = int(n ** 0.5)
    if n % 2 == 0:
        return 2
    for i in range(3, sqrt_n + 1, 2):
        if n % i == 0:
            return i
    return 1