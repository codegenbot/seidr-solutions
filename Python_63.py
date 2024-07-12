from itertools import islice

def fibfib(n: int):
    if n <= 1:
        return 0
    fib_series = (0, 1)
    for _ in range(2, n+1):  
        fib_series = (a + b for a, b in zip(fib_series, islice(fib_series, 1, None)))
    return sum(islice(fib_series, n))