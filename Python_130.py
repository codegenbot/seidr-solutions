
def fib(n):
    """The Fibonacci sequence is a sequence of numbers defined by the recurrence:
    fib(n) = fib(n - 1) + fib(n - 2), if n > 2,
    fib(1) = 1,
    fib(2) = 1.
    You are given a non-negative integer number n, you have to return a list of the
    first n + 1 numbers of the Fibonacci sequence.
    Examples:
    fib(3) = [1, 1, 2, 3]
    """
    if n == 0:
        return [1]
    elif n == 1:
        return [1, 1, 2]
    else:
        return [1, 1, 2] + [fib(n - 1) + fib(n - 2)]
    """


def tri(n):
    """Everyone knows Fibonacci sequence, it was studied deeply by mathematicians in 
    the last couple centuries. However, what people don't know is Tribonacci sequence.
    Tribonacci sequence is defined by the recurrence:
    tri(1) = 3
    tri(n) = 1 + n / 2, if n is even.
    tri(n) =  tri(n - 1) + tri(n - 2) + tri(n + 1), if n is odd.
    For example:
    tri(2) = 1 + (2 / 2) = 2
    tri(4) = 3
    tri(3) = tri(2) + tri(1) + tri(4)
           = 2 + 3 + 3 = 8 
    You are given a non-negative integer number n, you have to a return a list of the 
    first n + 1 numbers of the Tribonacci sequence.
    Examples:
    tri(3) = [1, 3, 2, 8]
    """
    if n == 0:
        return [1]
    elif n == 1:
        return [1, 3]
    elif n == 2:
        return [1, 3, 2]
    else:
        return [1, 3, 2] + [1 + (n / 2)] if n % 2 == 0 else [1, 3, 2] + [tri(n - 1) + tri(n - 2) + tri(n + 1)]


def check(func):
    assert func(0) == [1]
    assert func(1) == [1, 3]
    assert func(2) == [1, 3, 2]


check(tri)
