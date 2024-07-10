def f(n):
    return [1 if i == 1 else i * f(n - 1) for i in range(1, n + 1)]