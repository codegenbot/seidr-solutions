

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


def print_step(n: int):
    """Given an integer n, print the following pattern:
    1
    1 2
    1 2 3
    1 2 3 4
    1 2 3 4 5
    1 2 3 4
    1 2 3
    1 2
    1
    >>> print_step(3)
    1
    1 2
    1 2 3
    1 2
    1
    >>> print_step(1)
    1
    >>> print_step(4)
    1
    1 2
    1 2 3
    1 2 3 4
    1 2 3
    1 2
    1
    """
    """
