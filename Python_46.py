```
def fib4(n: int):
    if n < 0:
        raise ValueError("n must be a non-negative integer")
    if n <= 3:
        return [0, 0, 2, 0][n-1]
    a, b, c, d = 0, 0, 2, 0
    for _ in range(4, n+1):
        a, b, c, d = b, c, d, b+c
    return d