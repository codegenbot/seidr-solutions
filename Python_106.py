def f(n):
    return [
        1 if i == 0 else i * f(i - 1) if i % 2 == 0 else sum(range(1, i + 1))
        for i in range(n)
    ]