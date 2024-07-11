def prime_fib(n: int):
    fib = [0, 1]
    while len(fib) <= n:
        fib.append(fib[-1] + fib[-2])
    for num in fib:
        if all(num % i != 0 for i in range(2, int(num**0.5) + 1)):
            return num