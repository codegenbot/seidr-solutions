def is_prime(num):
    if num < 2:
        return False
    for i in range(2, int(num ** 0.5) + 1):
        if num % i == 0:
            return False
    return True

def prime_fib(n: int):
    fib = [0, 1]
    idx = 2
    while len(fib) <= n:
        fib.append(fib[idx - 1] + fib[idx - 2])
        idx += 1
    for num in fib:
        if is_prime(num):
            n -= 1
            if n == 0:
                return num