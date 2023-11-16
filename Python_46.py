

def fib4(n: int):
    """The Fib4 number sequence is a sequence similar to the Fibbonacci sequnece that's defined as follows:
    fib4(0) -> 0
    fib4(1) -> 0
    fib4(2) -> 2
    fib4(3) -> 0
    fib4(n) -> fib4(n-1) + fib4(n-2) + fib4(n-3) + fib4(n-4).
    Please write a function to efficiently compute the n-th element of the fib4 number sequence.  Do not use recursion.
    >>> fib4(5)
    4
    >>> fib4(6)
    8
    >>> fib4(7)
    14

def large_sum(n: int):
    """Given an array of non-negative integers, return a subsequence of the array such that the sum of the subsequence is maximized. This is a variant of the "maximum contiguous subsequence sum" problem, except that you can take numbers from either end of the array.
    Example: the subsequence of [1, 2, 4, 6, -2, 3, 2] that maximizes the sum is [4, 6, -2].
    You can use this array for testing: [1, 2, 4, 6, -2, 3, 2]
    
    >>> large_sum([1,2,4,6,-2,3,2])
    [4, 6, -2]
    >>> large_sum([-5, -300, -1, 100, 500, -10])
    [100, 500]
    >>> large_sum([1, 2, -1, 4, -200])
    [1, 2, -1, 4]
    """
    """
