def f(n):
    return [1 if i % 2 == 0 else i * (i + 1) // 2 for i in range(1, n + 1)]