```
def prime_fib(n: int):
    fib_num = 0
    a, b = 0, 1
    i = 0
    while True:
        if i == n:
            return a
        fib_num = a + b
        a, b = b, fib_num
        if is_prime(fib_num):
            i += 1

def is_prime(num: int):
    if num < 2:
        return False
    for i in range(2, int(num**0.5) + 1):
        if num % i == 0:
            return False
    return True