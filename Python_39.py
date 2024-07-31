```
def prime_fib(n: int):
    fib_num = 0
    a, b = 0, 1
    count = 0
    while True:
        fib_num += 1
        if is_prime(fib_num):
            count += 1
            if count == n:
                return fib_num
        a, b = b, a + b

def is_prime(num: int) -> bool:
    if num < 2:
        return False
    for i in range(2, int(num**0.5) + 1):
        if num % i == 0:
            return False
    return True