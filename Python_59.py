def largest_prime_factor(n):
    if n <= 1 or n % 2 == 0:
        return 1
    for i in range(3, int(n**0.5) + 1, 2):
        if n % i == 0:
            return i
    return 1