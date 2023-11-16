

def fib(n: int):
    """Return n-th Fibonacci number.
    >>> fib(10)
    55
    >>> fib(1)
    1
    >>> fib(8)
    21

def make_counter():
    """Return a counter function that returns the next value
    each time it is called.
    >>> ct1 = make_counter()
    >>> ct2 = make_counter()
    >>> ct1()
    1
    >>> ct1()
    2
    >>> ct2()
    1
    >>> ct1()
    3
    >>> ct2()
    2
    """
    """
