from math import isqrt, sqrt

def is_prime(num):
    if num < 2:
        return False
    if num == 2:
        return True
    for i in range(2, int(sqrt(num)) + 1):
        if num % i == 0:
            return False
    return True