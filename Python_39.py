from math import isqrt

def is_prime(num):
    if num < 2:
        return False
    if num == 2:
        return True
    if num % 2 == 0:
        return False
    for i in range(3, isqrt(num)+1, 2):
        if num % i == 0:
            return False
    return True