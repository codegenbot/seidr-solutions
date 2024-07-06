
def largest_prime_factor(n):
    for i in range(2, n + 1):
        if n % i == 0 and is_prime(i):
            return i

def is_prime(n):
    return n > 1 and all(n % i for i in range(2, int(n ** 0.5) + 1))