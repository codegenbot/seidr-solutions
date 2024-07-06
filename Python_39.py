
def prime_fib(n: int):
    if n <= 0:
        return None
    fib = [0, 1]
    i = 2
    while len(fib) < n:
        fib.append(fib[i-1] + fib[i-2])
        i += 1
    if is_prime(fib[-1]):
        return fib[-1]
    else:
        return None
def is_prime(n):
    from math import sqrt as msqrt
    
    if n <= 1 or n % 2 == 0:
        return False
    for i in range(3, int(msqrt(n)) + 1, 2):
        if n % i == 0:
            return False
    return True
