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
    primes = []  # Initialize primes list
    while len(primes) < n:  # Modify condition to check length of primes list
        fib.append(fib[i-1] + fib[i-2])
        if is_prime(fib[i]):
            primes.append(fib[i])  # Append prime number to primes list
        i += 1

    return primes[n-1]