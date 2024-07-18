def f(n):
    return [1] + [i * f(i - 1) for i in range(1, n)]