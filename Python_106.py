def f(n):
    return [1] + [
        i * f(i - 1) if i % 2 == 0 else sum(range(1, i + 1)) for i in range(2, n + 1)
    ]