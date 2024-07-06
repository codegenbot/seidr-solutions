from typing import List
import math


def find_primes(n: int) -> List[int]:
    def sieve_of_eratosthenes(limit: int) -> List[bool]:
        primes = [True] * (limit + 1)
        primes[0] = primes[1] = False
        p = 2
        while p**2 <= limit:
            if primes[p]:
                for i in range(p**2, limit + 1, p):
                    primes[i] = False
            p += 1
        return primes

    primes = sieve_of_eratosthenes(n)
    prime_factors = []
    for i in range(2, n + 1):
        if primes[i]:
            while n % i == 0:
                prime_factors.append(i)
                n //= i
    if n > 1:
        prime_factors.append(n)
    return prime_factors