def f(n):
    return [1] if n == 0 else [1] + [i * f(i - 1)[0] for i in range(1, n)]