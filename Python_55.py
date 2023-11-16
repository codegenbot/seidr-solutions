import sys



def fib(n):
    """
    Return n-th Fibonacci number.

    >>> fib(10)
    55
    >>> fib(1)
    1
    >>> fib(8)

    21
    if n < 1:
        raise ValueError()
    elif n == 0:
        return 0
    elif n == 1:
        return 1
    else:
        return fib(n - 1) + fib(n - 2)


def fib_non_recursive(n):
    """
    Return n-th Fibonacci number.

    >>> fib(10)
    55
    >>> fib(1)
    1
    >>> fib(8)
    21

    """
    if n < 1:
        raise ValueError()
    elif n == 0:
        return 0
    elif n == 1:
        return 1

    current, prev = 1, 0
    for i in range(1, n):
        current, prev = prev + current, current
    return current


def main(n):
    try:
        n = int(n)
    except ValueError:
        print('Failed to convert argument to integer.')
        sys.exit(1)

    try:
        print(fib(n))
        print(fib_non_recursive(n))
    except ValueError:
        print("Invalid argument")
        sys.exit(1)


if __name__ == "__main__":
    if len(sys.argv) != 1:
        sys.exit(1)
    main(sys.argv[1])
    """
