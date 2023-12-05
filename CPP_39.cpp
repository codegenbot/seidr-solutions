```
CPP/39
Prime Fibonacci numbers

def prime_fib(n):
    a, b = 0, 1
    while n > 2:
        c = a + b
        if is_prime(c):
            n -= 1
        a, b = b, c
    return b

def is_prime(num):
    if num <= 1:
        return False
    for i in range(2, int(math.sqrt(num)) + 1):
        if num % i == 0:
            return False
    return True
```