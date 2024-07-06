def is_multiply_prime(n):
    return all(is_prime(i) for i in range(2, int(n**0.5) + 1))