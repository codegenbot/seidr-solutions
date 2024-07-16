def f(n):
    return [1 if i == 1 else i if i % 2 != 0 else math.factorial(i) for i in range(1, n+1)]