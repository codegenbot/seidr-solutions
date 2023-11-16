

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
    # Note: we're using a list with four elements to hold the values because
    # we're going to be very liberal with our use of temporary variables,
    # and we need to keep track of three previous values and the present
    # value separately.
    if n < 1:
        return 0
    if n < 2:
        return 0
    if n == 2:
        return 1
    a, b, c, d = 0, 0, 1, 0
    for _ in range(3, n+1):
        d = b + c + a
        a, b, c = b, c, d
    return d
    """
