def get_max_triples(n):
    primes = []
    for i in range(2, n + 1):
        if all(i % p != 0 for p in primes):
            primes.append(i)

    count = 0
    for prime in primes:
        for i in range(len(primes)):
            for j in range(i + 1, len(primes)):
                if prime + primes[i] + primes[j] % 3 == 0:
                    count += 1
    return count