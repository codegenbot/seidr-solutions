
def is_multiply_prime(a):
    if a <= 1 or a % 2 == 0:
        return False
    for i in range(3, int(a**0.5) + 1, 2):
        if a % i == 0 and is_prime(i):
            return True
    return False