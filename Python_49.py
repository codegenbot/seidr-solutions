def is_prime(n: int):
    if n < 2:
        return False
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            return False
    return True

def next_prime(n: int):
    while not is_prime(n):
        n += 1
    return n