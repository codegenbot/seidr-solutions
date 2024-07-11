def is_prime(num):
    if num < 2:
        return False
    for i in range(2, int(num ** 0.5) + 1):
        if num % i == 0:
            return False
    return True

def prime_fib(n: int):
    if n == 1:
        return 2
    if n == 2:
        return 3
    fib = [1, 1]
    while len(fib) < n:
        new_fib = fib[-1] + fib[-2]
        fib.append(new_fib)
        if is_prime(new_fib):
            n -= 1
            if n == 0:
                return new_fib