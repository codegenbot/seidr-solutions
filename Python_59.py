```Python
def largest_prime_factor(n: int):
    largest = 1
    for i in range(2, n + 1):
        if n % i == 0 and is_prime(i):
            largest = i
    return largest

def is_prime(k: int):
    if k < 2:
        return False
    for i in range(2, int(k**0.5) + 1):
        if k % i == 0:
            return False
    return True