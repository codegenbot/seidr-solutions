def prime_fib(n: int):
    fib = [1, 2]
    for i in range(2, n + 1):
        fib.append(fib[-1] + fib[-2])
        while len(str(fib[i])) > 1 and not all(
            int(digit) in [0, 1, 5, 7] for digit in str(fib[i])
        ):
            fib[i] = (fib[i - 1] + fib[-2]) % 2 + 1 if i % 2 else 1
    return fib[n]