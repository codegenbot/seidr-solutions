def fib4(n):
    if n <= 3:
        return 0
    elif n == 4:
        return 2
    else:
        cache = {i: fib4(i) for i in range(4)}
        for i in range(5, n + 1):
            cache[i] = cache[i - 1] + cache[i - 2] + cache[i - 3]
        return cache[n]