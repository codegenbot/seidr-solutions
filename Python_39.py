def prime_fib(n: int):
    a, b = 1, 2
    i = 0
    while True:
        if n == i + 1:
            return b
        if b < 2:
            b += 1
            continue
        for j in range(2, int(b**0.5) + 1):
            if b % j == 0:
                b += 1
                break
        else:
            a, b = b, a + b