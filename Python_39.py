
def prime_fib(n: int):
    fibs = [0, 1]
    while len(fibs) <= n:
        fibs.append(fibs[-1] + fibs[-2])
    return next(x for x in fibs if is_prime(x))