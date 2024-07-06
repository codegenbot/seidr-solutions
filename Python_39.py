def prime_fib(n):
    if n <= 0:
        return None
    fib = [0, 1]
    i = 2
    while len(fib) < n:
        fib.append(fib[i - 1] + fib[i - 2])
        i += 1
    # Calculate the prime Fibonacci number
    for j in range(2, int(math.sqrt(fib[-1]))):
        if fib[-1] % j == 0:
            break
    else:
        return fib[-1]
    return None