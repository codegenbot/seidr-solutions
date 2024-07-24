def find_prime(n: int):
    if n < 2:
        return None
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            return None
    return n