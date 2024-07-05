def fib4(n: int):
    if n == 0:
        return 0
    elif n == 1:
        return 0
    elif n == 2:
        return 2
    elif n == 3:
        return 0

    fib = [0, 0, 2, 0]
    for i in range(4, n + 1):
        next_fib = fib[-1] + fib[-2] + fib[-3] + fib[-4]
        fib.append(next_fib)
    return fib[n]