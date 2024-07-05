def count_up_to(n):
    result = []
    for i in range(2, n + 1):
        if sieve(i) == [i]:
            result.append(i)
    return result


def sieve(n):
    primes = [True] * (n + 1)
    for p in range(2, int(n**0.5) + 1):
        if primes[p]:
            for i in range(p * p, n + 1, p):
                primes[i] = False
    return [p for p in range(2, n + 1) if primes[p]]