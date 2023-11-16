

def fibfib(n: int):
    """The FibFib number sequence is a sequence similar to the Fibbonacci sequnece that's defined as follows:
    fibfib(0) == 0
    fibfib(1) == 0
    fibfib(2) == 1
    fibfib(n) == fibfib(n-1) + fibfib(n-2) + fibfib(n-3).
    Please write a function to efficiently compute the n-th element of the fibfib number sequence.
    >>> fibfib(1)
    0
    >>> fibfib(5)
    4
    >>> fibfib(8)
    24
    fib_n_1 = 0
    fib_n_2 = 0
    fib_n_3 = 1
    fib_n = 0
    if n == 0:
        return fib_n_1
    elif n == 1:
        return fib_n_2
    elif n == 2:
        return fib_n_3
    else:
        for i in range(n-3):
            fib_n = fib_n_1 + fib_n_2 + fib_n_3
            fib_n_1, fib_n_2, fib_n_3 = fib_n_2, fib_n_3, fib_n
        return fib_n
    """
