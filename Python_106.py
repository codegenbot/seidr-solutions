def f(n):
    return [1] if n == 0 else [1 if i == 0 else (i + 1) * f(i)[0] for i in range(n)]