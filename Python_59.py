import math

def largest_prime_factor(n: int):
    for i in range(2, int(math.sqrt(n)) + 1):
        while n % i == 0:
            n //= i
    return n