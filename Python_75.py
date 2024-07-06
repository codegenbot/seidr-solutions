def is_multiply_prime(n):
    return all(is_prime(i) for i in range(2, int(n**0.5) + 1))


def is_prime(n):
    if n <= 1 or n % 2 == 0:
        return False
    for i in range(3, int(n**0.5) + 1, 2):
        if n % i == 0:
            return False
    return True