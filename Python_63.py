

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


def num_subarrays(nums: List[int], target: int):
    """Given a list of integers nums and a target integer target, return the number of non-empty subarrays of nums that are contiguous and have a sum equal to target.

    >>> num_subarrays([1, 2, 3, 2], 2)
    2
    >>> num_subarrays([1, 1, 1, 1, 1], 2)
    5
    >>> num_subarrays([1, 1, 1, 1, 1], 5)
    5
    >>> num_subarrays([1, 1, 1, 1, 1], 15)
    1
    >>> num_subarrays([1, 1, 1, 1, 1], 0)
    0
    >>> num_subarrays([0, 0, 0, 0, 0], 0)
    15
    """
    """
