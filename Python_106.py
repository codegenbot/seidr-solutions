def f(n):
    return [
        sum(range(i + 1)) if i % 2 else i * math.factorial(i) for i in range(1, n + 1)
    ]