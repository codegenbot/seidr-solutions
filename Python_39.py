def is_prime(num):
    if num < 2:
        return False
    for i in range(2, int(num ** 0.5) + 1):
        if num % i == 0:
            return False
    return True

def prime_fib(n: int):
    fib = [0, 1]
    i = 2
    while True:
        fib.append(fib[i-1] + fib[i-2])
        if is_prime(fib[i]):
            n -= 1
            if n == 0:
                return fib[i]
        i += 1