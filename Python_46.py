

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


def count_substrings(s: str, t: str):
    """Count the number of substrings in string s that match string t.  The substrings do not need to be consecutive and can overlap.
    >>> count_substrings('abc', 'abc')
    1
    >>> count_substrings('abc', 'ab')
    2
    >>> count_substrings('abc', 'a')
    3
    >>> count_substrings('abc', 'b')
    2
    >>> count_substrings('abc', 'c')
    2
    """


def count_substrings_2(s: str, t: str):
    """Count the number of substrings in string s that match string t.  The substrings do not need to be consecutive and can overlap.
    >>> count_substrings_2('abc', 'abc')
    1
    >>> count_substrings_2('abc', 'ab')
    2
    >>> count_substrings_2('abc', 'a')
    3
    >>> count_substrings_2('abc', 'b')
    2
    >>> count_substrings_2('abc', 'c')
    2
    """
    """
