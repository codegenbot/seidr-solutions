def prime_fib(n: int):
    def is_prime(num):
        if num < 2:
            return False
        for i in range(2, int(num**0.5) + 1):
            if num % i == 0:
                return False
        return True

    fibs = [0, 1]
    while len(fibs) < 1000:  # Generate enough Fibonacci numbers
        fibs.append(fibs[-1] + fibs[-2])

    prime_fibs = [x for x in fibs if is_prime(x)]
    return prime_fibs[n - 1]