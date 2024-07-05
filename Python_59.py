def largest_prime_factor(n):
    if n <= 1:
        return None
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            return largest_prime_factor(n // i)
    return n