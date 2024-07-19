def is_prime(num):
    if num < 2:
        return False
    for i in range(2, int(num ** 0.5) + 1):
        if num % i == 0:
            return False
    return True

def prime_fib(n: int):
    def is_fib(num):
        return num in {0, 1} or is_fib(num - 1) + is_fib(num - 2)
    
    i, count = 0, 0
    while count < n:
        if is_prime(is_fib(i)):
            count += 1
        i += 1
    return is_fib(i - 1)