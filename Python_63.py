

def fibfib(n: int):
    """The FibFib number sequence is a sequence similar to the Fibbonacci sequnece that's defined as follows:
    fibfib(0) == 0
    fibfib(1) == 0
    fibfib(2) == 1
    fibfib(n) == fibfib(n-1) + fibfib(n-2) + fibfib(n-3).
    Please write a function to efficiently compute the n-th element of the fibfib number sequence.
    >>> fibfib(0)
    0
    >>> fibfib(1)
    1
    >>> fibfib(2)
    1
    >>> fibfib(3)
    2
    >>> fibfib(4)
    4
    >>> fibfib(5)
    7
    >>> fibfib(6)
    13
    >>> fibfib(10)
    89
    if n == 0:
        return 0
    if n == 1:
        return 1
    if n == 2:
        return 1
    # TODO: Complete the following code.
    return fibfib(n-1) + fibfib(n-2) + fibfib(n-3)


# TODO: Write a function that returns the n-th element of the fibfib number sequence.
#       You may use any data structure you like.
#       You may not use recursion.
def fibfib_iterative(n: int):
    pass


# TODO: Write a function that returns the n-th element of the fibfib number sequence.
#       You may use any data structure you like.
#       You may not use recursion.
def fibfib_iterative_efficient(n: int):
    pass
    """
