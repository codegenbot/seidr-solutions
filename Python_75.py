def is_multiply_prime(a):
    for i in range(2, a // 2 + 1):
        if a % i == 0 and all(is_prime(i) for i in range(2, int(a**0.5) + 1)):
            return True
    return False