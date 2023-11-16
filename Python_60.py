

def sum_to_n(n: int):
    """sum_to_n is a function that sums numbers from 1 to n.
    >>> sum_to_n(30)
    465
    >>> sum_to_n(100)
    5050
    >>> sum_to_n(5)
    15
    >>> sum_to_n(10)
    55
    >>> sum_to_n(1)
    1
    total = 0
    for i in range(1, n+1):
        total += i
    return total


def sum_to_n_recursive(n: int):
    """sum_to_n_recursive is a function that sums numbers from 1 to n using recursion.
    >>> sum_to_n_recursive(30)
    465
    >>> sum_to_n_recursive(100)
    5050
    >>> sum_to_n_recursive(5)
    15
    >>> sum_to_n_recursive(10)
    55
    >>> sum_to_n_recursive(1)
    1
    """
    if n == 1:
        return 1
    else:
        return n + sum_to_n_recursive(n-1)


def sum_to_n_recursive_2(n: int):
    """sum_to_n_recursive_2 is a function that sums numbers from 1 to n using recursion.
    >>> sum_to_n_recursive_2(30)
    465
    >>> sum_to_n_recursive_2(100)
    5050
    >>> sum_to_n_recursive_2(5)
    15
    >>> sum_to_n_recursive_2(10)
    55
    >>> sum_to_n_recursive_2(1)
    1
    """
    return n * (n+1) // 2
    """
