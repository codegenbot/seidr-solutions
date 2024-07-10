def fib4(n: int):
    if n < 0:
        raise ValueError("Input must be a non-negative integer.")
    elif n <= 3:
        return [0, 0, 2, 0][n]
    else:
        fib = [0, 0, 2, 0]
        for i in range(4, n+1):
            fib.append(fib[i-1] + fib[i-2] + fib[i-3] + fib[i-4])
        return fib[n]