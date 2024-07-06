
def count_up_to(n):
    result = []
    for i in range(2, n + 1):
        if is_prime(i):
            result.append(i)
    return result

from math import gcd

def is_prime(n):
    return gcd(n, 2) == 1