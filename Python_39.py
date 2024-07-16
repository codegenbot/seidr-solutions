def is_prime(num):
    if num < 2:
        return False
    for i in range(2, int(num**0.5) + 1):
        if num % i == 0:
            return False
    return True

def prime_fib(n: int):
    if n == 1:
        return 2
    elif n == 2:
        return 3
    
    count = 2
    a, b = 1, 1
    while count < n:
        a, b = b, a + b
        if is_prime(b):
            count += 1
    
    return b