

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

def find_max_subarray(A: List[int]):
    """Find the contiguous subarray within an array (containing at least one number) which has the largest sum.
    For example, given the array [-2,1,-3,4,-1,2,1,-5,4], the contiguous subarray [4,-1,2,1] has the largest sum = 6.
    >>> find_max_subarray([-2,1,-3,4,-1,2,1,-5,4])
    6
    >>> find_max_subarray([])
    0
    >>> find_max_subarray([1,2,3])
    6
    >>> find_max_subarray([-1,-2,-3])
    0
    >>> find_max_subarray([-1,2,3,4])
    9
    >>> find_max_subarray([1,-2,3,4])
    7
    >>> find_max_subarray([1,2,-3,4])
    4
    >>> find_max_subarray([1,2,3,-4])
    6
    """
    """
