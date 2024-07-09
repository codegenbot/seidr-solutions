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
        fib.append(fib[-1] + fib[-2])
    
    prime_fib_num = 0
    num = fib[-1]
    while prime_fib_num < n:
        if is_prime(num):
            prime_fib_num += 1
        num += 1
    
    return num - 1