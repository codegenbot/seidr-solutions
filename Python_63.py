

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


def min_moves(numbers: list, target: int):
    """
    Given a list of numbers, and a target number, please write a function to find the minimum number of moves to
    reach that target. A move consists of adding or subtracting the first number in the list to any number in the
    list.
    >>> min_moves([3, 2, 1], 4)
    2
    >>> min_moves([1, 2, 3], 7)
    3
    >>> min_moves([4, 3, 2, 1], 5)
    2
    """
    """
