def is_multiply_prime(a):
    for i in range(1, int(a**0.5) + 1):
        if a % i == 0 and is_prime(i) and is_prime(a // i):
            if not (i * (a // i) == a):
                return False
    return True