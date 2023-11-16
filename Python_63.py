

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
    if n == 0:
        return 0
    if n == 1:
        return 0
    if n == 2:
        return 1
    if n == 3:
        return 1
    else:
        return fibfib(n-1) + fibfib(n-2) + fibfib(n-3)

def fibfib_efficient(n: int):
    """
    Please write a function to efficiently compute the n-th element of the fibfib number sequence
    in O(n) time.
    >>> fibfib_efficient(1)
    0
    >>> fibfib_efficient(5)
    4
    >>> fibfib_efficient(8)
    24
    """
    seq = [0,0,1]
    if n <= 2:
        return seq[n]
    else:
        for i in range(3, n+1):
            seq.append(seq[i-1] + seq[i-2] + seq[i-3])
        return seq[n]


import doctest
doctest.testmod()
    """
