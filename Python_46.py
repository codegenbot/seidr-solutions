def fib4(n: int):
    if n < 0:
        raise ValueError("Input should be a non-negative integer.")
    elif n <= 3:
        return [0, 0, 2, 0][n]
    else:
        fib4_values = [0, 0, 2, 0]
        for i in range(4, n + 1):
            fib4_values.append(
                fib4_values[i - 1]
                + fib4_values[i - 2]
                + fib4_values[i - 3]
                + fib4_values[i - 4]
            )
        return fib4_values[n]