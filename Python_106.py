def f(n):
    return [1] if n == 0 else [f(i - 1)[0] * i for i in range(1, n+1)]