

def fib(n: int):
    """Return n-th Fibonacci number.
    >>> fib(10)
    55
    >>> fib(1)
    1
    >>> fib(8)
    21

    fib_arr = [0, 1]

    for i in range(2, n):
        fib_arr.append(fib_arr[i - 1] + fib_arr[i - 2])

    return fib_arr[n - 1]
    """
