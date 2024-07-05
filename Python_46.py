def fib4(n: int):
    if n == 0 or n == 1 or n == 3:
        return 0
    elif n == 2:
        return 2

    fib = [0, 0, 2, 0]
    for i in range(4, n + 1):
        fib.append(fib[-1] + fib[-2] + fib[-3] + fib[-4])
    return fib[n]