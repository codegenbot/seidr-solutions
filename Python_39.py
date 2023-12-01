def prime_fib(n: int):
    def is_prime(num):
        if num < 2:
            return False
        for i in range(2, int(num ** 0.5) + 1):
            if num % i == 0:
                return False
        return True

    fib = [0, 1]
    i = 2
    while len(fib) <= n:
        fib.append(fib[i-1] + fib[i-2])
        i += 1

    primes = [num for num in fib if is_prime(num)]
    return primes[n-1]