

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


def check(f):
    assert f(0) == 0
    assert f(1) == 0
    assert f(2) == 2
    assert f(3) == 0
    assert f(4) == 2
    assert f(5) == 4
    assert f(12) == 386


if __name__ == "__main__":
    import doctest

    doctest.testmod()
    check(fib4)

    # YOUR CODE HERE
    """
