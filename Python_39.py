def prime_fib(n):
    def is_prime(num):
        if num < 2:
            return False
        for i in range(2, int(num**0.5) + 1):
            if num % i == 0:
                return False
        return True

    fib = [0, 1]
    i = 2
    while len(fib) <= n:
        fib.append(fib[i - 1] + fib[i - 2])
        if is_prime(fib[-1]):
            i += 1
    return fib[-1]