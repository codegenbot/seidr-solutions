def f(n):
    return [1] + [i * (i + 1) // 2 if i % 2 else math.factorial(i) for i in range(1, n)]