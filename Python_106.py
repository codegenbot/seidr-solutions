def f(n):
    return [1] if n == 0 else [i * f(i - 1)[0] for i in range(1, n + 1])