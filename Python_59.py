def largest_prime_factor(n: int) -> int:
    for i in range(2, n+1):
        if n % i == 0 and is_prime(i):
            return i
    return None

def is_prime(n: int) -> bool:
    if n <= 1:
        return False
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            return False
    return True