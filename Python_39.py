Here's the problem description and function signature:

Find the nth Fibonacci number that is also prime

```
def nth_prime_fib(n: int) -> int:
    a, b = 0, 1
    count = 0
    result = 0
    while True:
        if is_prime(b):
            count += 1
            if count == n:
                result = b
                return result
        a, b = b, a + b

def is_prime(num: int) -> bool:
    if num < 2:
        return False
    for i in range(2, int(num**0.5) + 1):
        if num % i == 0:
            return False
    return True