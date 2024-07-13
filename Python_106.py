def f(n):
    return [1 if i == 1 else i * f(i-1) if i % 2 == 0 else sum(range(1, i+1)) for i in range(1, n+1)]