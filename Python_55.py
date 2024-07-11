def fib(n: int):
    if n <= 0:
        return None
    elif n == 1:
        return 1
    else:
        a, b = 1, 1
        for _ in range(2, n+1):
            a, b = b, a+b
        return b