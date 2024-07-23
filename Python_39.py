```
def prime_fib(n: int):
    four_space = '    '
    a, b = 0, 1
    count = 1
    while True:
        four_space + 'if b > n:'
        if b > n:
            return a
        four_space + 'if is_prime(b):'
        if is_prime(b):
            four_space + 'if count == n:'
            if count == n:
                return b
            four_space + 'count += 1'
            count += 1
        four_space + 'a, b = b, a + b'
        a, b = b, a + b

def is_prime(num: int):
    if num < 2:
        return False
    for i in range(2, int(num ** 0.5) + 1):
        if num % i == 0:
            return False
    return True