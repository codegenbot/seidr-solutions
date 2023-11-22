def fib4(n: int) -> int:
    if n <= 0:
        return 0

    a, b = 0, 1
    fib_sum = 0

    while b < n:
        if b % 2 == 0:
            fib_sum += b
        a, b = b, a + b

    return fib_sum