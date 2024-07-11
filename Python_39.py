def prime_fib(n: int):
    a, b = 0, 1
    fib_numbers = [a, b]
    while True:
        a, b = b, a + b
        if len(fib_numbers) > n and b < 10**6:
            return fib_numbers[n - 1]
        elif b >= 10**6:
            break
        fib_numbers.append(b)