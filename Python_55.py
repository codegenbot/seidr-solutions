

def fib(n: int):
    """Return n-th Fibonacci number.
    >>> fib(10)
    55
    >>> fib(1)
    1
    >>> fib(8)

    # the first two Fibonacci numbers
    f_prev, f_next = 0, 1

    # compute the Fibonacci sequence up to the n-th
    # number and add the numbers to the list
    for i in range(n):
        f_prev, f_next = f_next, f_prev + f_next

    return f_prev
    21
    """
