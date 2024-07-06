def fib4(n: int):
    if n < 0:
        return "Input should be a non-negative integer."
    elif n <= 3:
        return [0, 0, 2, 0][n]
    else:
        fibs = [0, 0, 2, 0]
        for i in range(4, n + 1):
            fibs.append(fibs[i - 1] + fibs[i - 2] + fibs[i - 3] + fibs[i - 4])
        return fibs[-1]