

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


def find_missing_number(numbers: list):
    """Given a list of numbers 1 to n, find the missing number.
    >>> find_missing_number([1, 2, 3, 4, 5, 6, 7, 9, 10])
    8
    >>> find_missing_number([1, 2, 3, 4, 5, 6, 7, 8, 10])
    9
    >>> find_missing_number([1, 2, 3, 4, 5, 6, 7, 8, 9])
    10
    """
    """
