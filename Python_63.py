

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


def fib(n: int):
    """The Fibonacci number sequence is a sequence defined as follows:
    fib(0) == 0
    fib(1) == 1
    fib(n) == fib(n-1) + fib(n-2).
    Please write a function to efficiently compute the n-th element of the Fibonacci number sequence.
    >>> fib(1)
    1
    >>> fib(5)
    5
    >>> fib(8)
    21
    """


def fib_list(n: int):
    """The Fibonacci number sequence is a sequence defined as follows:
    fib(0) == 0
    fib(1) == 1
    fib(n) == fib(n-1) + fib(n-2).
    Please write a function to efficiently compute the n-th element of the Fibonacci number sequence.
    >>> fib_list(1)
    [0, 1]
    >>> fib_list(5)
    [0, 1, 2, 3, 5]
    >>> fib_list(8)
    [0, 1, 2, 3, 5, 8, 13, 21]
    """


def merge_sort(lst: list):
    """The merge_sort algorithm is a sorting algorithm that sorts a list by recursively dividing the list into two halves,
    and sorting each half, then merging the two sorted halves.
    Please write a function to implement the merge sort algorithm:
    >>> merge_sort([1, 2, 3, 4, 5])
    [1, 2, 3, 4, 5]
    >>> merge_sort([1, 5, 2, 6, 3, 7, 4, 8])
    [1, 2, 3, 4, 5, 6, 7, 8]
    >>> merge_sort([1, 5, 2, 6, 3, 7, 4, 8, 9])
    [1, 2, 3, 4, 5, 6, 7, 8, 9]
    >>> merge_sort([9, 8, 7, 6, 5, 4, 3, 2, 1])
    [1, 2, 3, 4, 5, 6, 7, 8, 9]
    """


def quick_sort(lst: list):
    """The quick_sort algorithm is a sorting algorithm that sorts a list by recursively selecting a pivot,
    and sorting the list into two halves, such that all elements in the first half are <= the pivot,
    and all elements in the second half are > the pivot.
    Please write a function to implement the merge sort algorithm:
    >>> quick_sort([1, 2, 3, 4, 5])
    [1, 2, 3, 4, 5]
    >>> quick_sort([1, 5, 2, 6, 3, 7, 4, 8])
    [1, 2, 3, 4, 5, 6, 7, 8]
    >>> quick_sort([1, 5, 2, 6, 3, 7, 4, 8, 9])
    [1, 2, 3, 4, 5, 6, 7, 8, 9]
    >>> quick_sort([9, 8, 7, 6, 5, 4, 3, 2, 1])
    [1, 2, 3, 4, 5, 6, 7, 8, 9]
    """
    """
