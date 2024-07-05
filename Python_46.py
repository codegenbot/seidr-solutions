def fib4(n):
    if n <= 1:
        return 0
    else:
        d = {0: 0, 1: 1}
        for i in range(2, n+1):
            d[i] = d[i-1] + d[i-2]
        return d[n]