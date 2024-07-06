def largest_prime_factor(n: int):
    for i in range(2, n + 1):
        if n % i == 0 and is_prime(i):
            return i
    return 1


def is_prime(n: int):
    if n <= 1 or n % 2 == 0:
        return False
    for i in range(3, int(n**0.5) + 1, 2):
        if n % i == 0:
            return False
    return True