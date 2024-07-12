def is_prime(num):
    if num < 2:
        return False
    for i in range(2, int(num ** 0.5) + 1):
        if num % i == 0:
            return False
    return True

def is_multiply_prime(a):
    for i in range(2, a):
        if a % i == 0 and is_prime(i) and is_prime(a // i):
            return True
    return False