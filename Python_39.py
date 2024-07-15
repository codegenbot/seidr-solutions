def is_prime(num):
    if num < 2:
        return False
    for i in range(2, int(num ** 0.5) + 1):
        if num % i == 0:
            return False
    return True

def prime_fib(n: int):
    def fib(n):
        if n <= 1:
            return n
        else:
            return fib(n - 1) + fib(n - 2)
    
    count = 0
    i = 0
    while count < n:
        if is_prime(fib(i)):
            count += 1
        i += 1
    return fib(i - 1)