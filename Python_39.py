
def prime_fib(n: int):
    fibs = []
    for i in range(1, n+1):
        if is_prime(i):
            fibs.append(i)
    return fibs[n-1]

def is_prime(n: int):
    if n < 2:
        return False
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            return False
    return True