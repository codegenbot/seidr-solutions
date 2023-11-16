

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

    # Initialize the sequence with the first four elements.
    seq = [0, 0, 2, 0]

    # Complete the following code.
    if n < 4:
        return seq[n]
    else:
        for i in range(4, n+1):
            seq.append(seq[i-1] + seq[i-2] + seq[i-3] + seq[i-4])

    return seq[n]
    """
