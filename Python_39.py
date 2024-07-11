Here is the complete solution:

```python
def prime_fib(n: int):
    a, b = 0, 1
    for _ in range(n*2):  
        a, b = b, a+b
        if b > 1000000:  
            break
    while True:
        if is_prime(b):
            return b
        b += 1

def is_prime(num: int):
    if num < 2:
        return False
    for i in range(2, int(num**0.5) + 1):
        if num % i == 0:
            return False
    return True