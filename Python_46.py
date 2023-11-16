

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

    # The Fibbonacci number sequence is defined as follows:
    # fib(0) -> 0
    # fib(1) -> 1
    # fib(n) -> fib(n-1) + fib(n-2)
    # Please write a function to efficiently compute the n-th element of the Fibbonacci number sequence.
    # Do not use recursion.
    # >>> fib(5)
    # 5
    # >>> fib(6)
    # 8
    # >>> fib(7)
    # 13

    if n == 0:
        return 0
    elif n == 1:
        return 1
    else:
        x, y, z, w = 0, 1, 1, 2
        for i in range(2, n):
            x = y
            y = z
            z = w
            w = x + y + z
        return w


print(fib4(0))
print(fib4(1))
print(fib4(2))
print(fib4(3))
print(fib4(4))
print(fib4(5))
print(fib4(6))
print(fib4(7))
print(fib4(8))
print(fib4(9))
print(fib4(10))
print(fib4(11))
print(fib4(12))
print(fib4(13))
print(fib4(14))
print(fib4(15))
print(fib4(16))
print(fib4(17))
print(fib4(18))
print(fib4(19))
print(fib4(20))
    """
