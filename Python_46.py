

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
    result = [0, 0, 2, 0]
    if n < 4:
        return result[n]
    else:
        for i in range(4, n+1):
            result.append(result[i-1] + result[i-2] + result[i-3] + result[i-4])
        return result[n]


if __name__ == "__main__":
    import doctest
    doctest.testmod()
    """
