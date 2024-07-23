```
def fib4(n: int):
    if n < 0:
        return None
    if n <= 3:
        return [0, 0, 2, 0][n]
    a, b, c, d = 0, 0, 2, 1
    for _ in range(4, n+1):
        a, b, c, d = b, c, d, a+b+c+d
    return d