def fib4(n: int):
    if n < 0:
        raise ValueError("n must be a non-negative integer")
    if n <= 3:
        return [0, 0, 2, 0][n]
    f = [0, 0, 2, 0]
    for i in range(4, n + 1):
        f.append(f[i - 1] + f[i - 2] + f[i - 3] + f[i - 4])
    return f[n]