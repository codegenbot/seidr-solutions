```
def fib4(n: int):
    if n < 0:
        return None
    elif n == 0 or n == 1:
        return 0
    elif n == 2:
        return 2
    else:
        a, b, c = 0, 0, 2
        for _ in range(3, n):
            a, b, c = b, c, a + b + c
        return c