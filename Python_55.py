def fib(n: int):
    if n <= 0:
        return "Invalid input"
    elif n == 1:
        return 1
    elif n == 2:
        return 1
    else:
        fib_n_minus_1 = 1
        fib_n_minus_2 = 1
        for _ in range(3, n+1):
            fib_n = fib_n_minus_1 + fib_n_minus_2
            fib_n_minus_2 = fib_n_minus_1
            fib_n_minus_1 = fib_n
        return fib_n