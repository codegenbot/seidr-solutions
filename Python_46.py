

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
    if n == 0:
        return 0
    elif n == 1:
        return 0
    elif n == 2:
        return 2
    elif n == 3:
        return 0
    else:
        return fib4(n-1) + fib4(n-2) + fib4(n-3) + fib4(n-4)


def fib4_efficient(n: int):
    """The Fib4 number sequence is a sequence similar to the Fibbonacci sequnece that's defined as follows:
    fib4(0) -> 0
    fib4(1) -> 0
    fib4(2) -> 2
    fib4(3) -> 0
    fib4(n) -> fib4(n-1) + fib4(n-2) + fib4(n-3) + fib4(n-4).
    Please write a function to efficiently compute the n-th element of the fib4 number sequence.  Do not use recursion.
    >>> fib4_efficient(5)
    4
    >>> fib4_efficient(6)
    8
    >>> fib4_efficient(7)
    14
    """
    if n == 0:
        return 0
    elif n == 1:
        return 0
    elif n == 2:
        return 2
    elif n == 3:
        return 0
    else:
        a = 0
        b = 0
        c = 2
        d = 0
        for i in range(4, n+1):
            e = a + b + c + d
            a = b
            b = c
            c = d
            d = e
        return e


def fib4_efficient_2(n: int):
    """The Fib4 number sequence is a sequence similar to the Fibbonacci sequnece that's defined as follows:
    fib4(0) -> 0
    fib4(1) -> 0
    fib4(2) -> 2
    fib4(3) -> 0
    fib4(n) -> fib4(n-1) + fib4(n-2) + fib4(n-3) + fib4(n-4).
    Please write a function to efficiently compute the n-th element of the fib4 number sequence.  Do not use recursion.
    >>> fib4_efficient_2(5)
    4
    >>> fib4_efficient_2(6)
    8
    >>> fib4_efficient_2(7)
    14
    """
    if n == 0:
        return 0
    elif n == 1:
        return 0
    elif n == 2:
        return 2
    elif n == 3:
        return 0
    else:
        a = 0
        b = 0
        c = 2
        d = 0
        for i in range(4, n+1):
            e = a + b + c + d
            a = b
            b = c
            c = d
            d = e
        return e


def fib4_efficient_3(n: int):
    """The Fib4 number sequence is a sequence similar to the Fibbonacci sequnece that's defined as follows:
    fib4(0) -> 0
    fib4(1) -> 0
    fib4(2) -> 2
    fib4(3) -> 0
    fib4(n) -> fib4(n-1) + fib4(n-2) + fib4(n-3) + fib4(n-4).
    Please write a function to efficiently compute the n-th element of the fib4 number sequence.  Do not use recursion.
    >>> fib4_efficient_3(5)
    4
    >>> fib4_efficient_3(6)
    8
    >>> fib4_efficient_3(7)
    14
    """
    if n == 0:
        return 0
    elif n == 1:
        return 0
    elif n == 2:
        return 2
    elif n == 3:
        return 0
    else:
        a = 0
        b = 0
        c = 2
        d = 0
        for i in range(4, n+1):
            e = a + b + c + d
            a = b
            b = c
            c = d
            d = e
        return e


def fib4_efficient_4(n: int):
    """The Fib4 number sequence is a sequence similar to the Fibbonacci sequnece that's defined as follows:
    fib4(0) -> 0
    fib4(1) -> 0
    fib4(2) -> 2
    fib4(3) -> 0
    fib4(n) -> fib4(n-1) + fib4(n-2) + fib4(n-3) + fib4(n-4).
    Please write a function to efficiently compute the n-th element of the fib4 number sequence.  Do not use recursion.
    >>> fib4_efficient_4(5)
    4
    >>> fib4_efficient_4(6)
    8
    >>> fib4_efficient_4(7)
    14
    """
    if n == 0:
        return 0
    elif n == 1:
        return 0
    elif n == 2:
        return 2
    elif n == 3:
        return 0
    else:
        a = 0
        b = 0
        c = 2
        d = 0
        for i in range(4, n+1):
            e = a + b + c + d
            a = b
            b = c
            c = d
            d = e
        return e


def fib4_efficient_5(n: int):
    """The Fib4 number sequence is a sequence similar to the Fibbonacci sequnece that's defined as follows:
    fib4(0) -> 0
    fib4(1) -> 0
    fib4(2) -> 2
    fib4(3) -> 0
    fib4(n) -> fib4(n-1) + fib4(n-2) + fib4(n-3) + fib4(n-4).
    Please write a function to efficiently compute the n-th element of the fib4 number sequence.  Do not use recursion.
    >>> fib4_efficient_5(5)
    4
    >>> fib4_efficient_5(6)
    8
    >>> fib4_efficient_5(7)
    14
    """
    if n == 0:
        return 0
    elif n == 1:
        return 0
    elif n == 2:
        return 2
    elif n == 3:
        return 0
    else:
        a = 0
        b = 0
        c = 2
        d = 0
        for i in range(4, n+1):
            e = a + b + c + d
            a = b
            b = c
            c = d
            d = e
        return e
    """
