
def prime_fib(n: int):
    primes = [2]
    for i in range(3, n+1):
        is_prime = True
        for j in range(2, int(i**0.5) + 1):
            if i % j == 0:
                is_prime = False
                break
        if is_prime:
            primes.append(i)
    return primes[-1]