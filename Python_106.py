def f(n):
    return [1] if n == 0 else [f(n-1)[0] * n] + f(n-1)[1:]