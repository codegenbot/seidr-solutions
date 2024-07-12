from itertools import islice, accumulate

def fibfib(n: int):
    if n <= 1:
        return 0
    fib_series = (0, 1)
    for _ in range(2, n+1):  
        fib_series = tuple(map(sum, [*(0,) + fib_series] + [fib_series]))
    return sum(fib_series)