import time



def fib(n):
    """
    Return n-th Fibonacci number.
    >>> fib(10) # 55
    >>> fib(1)  # 1
    >>> fib(8)  # 21
    """ 
    if n < 2:
        return n
    return fib(n - 1) + fib(n - 2)


def fib_iter(n):
    """
    Return n-th Fibonacci number.
    >>> fib_iter(10) # 55
    >>> fib_iter(1)  # 1
    >>> fib_iter(8)  # 21
    """ 
    if n < 2:
        return n
    a, b = 0, 1
    for _ in range(n - 1):
        a, b = b, a + b
    return b


def fib_iter_v2(n):
    """
    Return n-th Fibonacci number.
    >>> fib_iter(10) # 55
    >>> fib_iter(1)  # 1
    >>> fib_iter(8)  # 21
    """ 
    if n < 2:
        return n
    a, b = 0, 1
    for _ in range(n - 1):
        a, b = b, a + b
    return b


def fib_iter_v3(n):
    """
    Return n-th Fibonacci number.
    >>> fib_iter(10) # 55
    >>> fib_iter(1)  # 1
    >>> fib_iter(8)  # 21
    """ 
    if n < 2:
        return n
    a, b = 0, 1
    for _ in range(n - 1):
        a, b = b, a + b
    return b


def test_fib(fib_func):
    start = time.time()
    assert fib_func(10) == 55
    assert fib_func(1) == 1
    assert fib_func(8) == 21
    print(f"{fib_func.__name__}: {time.time() - start}")


if __name__ == "__main__":
    test_fib(fib)
    test_fib(fib_iter)
    test_fib(fib_iter_v2)
    test_fib(fib_iter_v3)
