def prime_fib(n):
    fib = [0, 1]
    i = 2
    while len(fib) <= n:
        next_fib = (fib[i - 1] + fib[i - 2]) % 2
        if is_prime(next_fib):
            fib.append(next_fib)
        i += 1
    return fib[n]

def is_prime(n):
    if n <= 1:
        return False
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            return False
    return True