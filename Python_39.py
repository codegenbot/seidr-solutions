
def prime_fib(n: int):
    fibs = [0, 1]
    while len(fibs) <= n:
        fibs.append(fibs[-1] + fibs[-2])
    return next(x for x in fibs if is_prime(x))

def is_prime(n):
    if n < 2:
        return False
    for i in range(2, int(n ** 0.5) + 1):
        if n % i == 0:
            return False
    return True
