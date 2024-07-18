n = int(input())

def is_prime(num):
    if num < 2:
        return False
    for i in range(2, int(num ** 0.5) + 1):
        if num % i == 0:
            return False
    return True

def prime_fib(n):
    fib = [0, 1]
    while len(fib) <= n:
        next_fib = fib[-1] + fib[-2]
        fib.append(next_fib)
        if is_prime(next_fib):
            n -= 1
    return fib[-2]

print(prime_fib(n))