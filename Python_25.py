from typing import List
import math


def find_primes(n: int) -> List[int]:
    primes = []
    for possiblePrime in range(2, n + 1):
        isPrime = True
        for num in range(2, int(math.sqrt(possiblePrime)) + 1):
            if possiblePrime % num == 0:
                isPrime = False
                break
        if isPrime:
            primes.append(possiblePrime)
    return primes