

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
    sum = 0
    for i in range(1, n+1):
        sum += i
    return sum


def sum_to_n_rec(n: int):
    """sum_to_n_rec is a function that sums numbers from 1 to n using recursion.
    >>> sum_to_n_rec(30)
    465
    >>> sum_to_n_rec(100)
    5050
    >>> sum_to_n_rec(5)
    15
    >>> sum_to_n_rec(10)
    55
    >>> sum_to_n_rec(1)
    1
    """
    if n == 1:
        return 1
    else:
        return n + sum_to_n_rec(n-1)


def sum_to_n_lambda(n: int):
    """sum_to_n_lambda is a function that sums numbers from 1 to n using lambda.
    >>> sum_to_n_lambda(30)
    465
    >>> sum_to_n_lambda(100)
    5050
    >>> sum_to_n_lambda(5)
    15
    >>> sum_to_n_lambda(10)
    55
    >>> sum_to_n_lambda(1)
    1
    """
    return lambda x: x + sum_to_n_lambda(x-1) if x > 0 else 0


def sum_to_n_lambda2(n: int):
    """sum_to_n_lambda2 is a function that sums numbers from 1 to n using lambda.
    >>> sum_to_n_lambda2(30)
    465
    >>> sum_to_n_lambda2(100)
    5050
    >>> sum_to_n_lambda2(5)
    15
    >>> sum_to_n_lambda2(10)
    55
    >>> sum_to_n_lambda2(1)
    1
    """
    return lambda x: x + sum_to_n_lambda2(x-1) if x > 0 else 0


def sum_to_n_lambda3(n: int):
    """sum_to_n_lambda3 is a function that sums numbers from 1 to n using lambda.
    >>> sum_to_n_lambda3(30)
    465
    >>> sum_to_n_lambda3(100)
    5050
    >>> sum_to_n_lambda3(5)
    15
    >>> sum_to_n_lambda3(10)
    55
    >>> sum_to_n_lambda3(1)
    1
    """
    return lambda x: x + sum_to_n_lambda3(x-1) if x > 0 else 0


def sum_to_n_lambda4(n: int):
    """sum_to_n_lambda4 is a function that sums numbers from 1 to n using lambda.
    >>> sum_to_n_lambda4(30)
    465
    >>> sum_to_n_lambda4(100)
    5050
    >>> sum_to_n_lambda4(5)
    15
    >>> sum_to_n_lambda4(10)
    55
    >>> sum_to_n_lambda4(1)
    1
    """
    return lambda x: x + sum_to_n_lambda4(x-1) if x > 0 else 0


def sum_to_n_lambda5(n: int):
    """sum_to_n_lambda5 is a function that sums numbers from 1 to n using lambda.
    >>> sum_to_n_lambda5(30)
    465
    >>> sum_to_n_lambda5(100)
    5050
    >>> sum_to_n_lambda5(5)
    15
    >>> sum_to_n_lambda5(10)
    55
    >>> sum_to_n_lambda5(1)
    1
    """
    return lambda x: x + sum_to_n_lambda5(x-1) if x > 0 else 0


def sum_to_n_lambda6(n: int):
    """sum_to_n_lambda6 is a function that sums numbers from 1 to n using lambda.
    >>> sum_to_n_lambda6(30)
    465
    >>> sum_to_n_lambda6(100)
    5050
    >>> sum_to_n_lambda6(5)
    15
    >>> sum_to_n_lambda6(10)
    55
    >>> sum_to_n_lambda6(1)
    1
    """
    return lambda x: x + sum_to_n_lambda6(x-1) if x > 0 else 0


def sum_to_n_lambda7(n: int):
    """sum_to_n_lambda7 is a function that sums numbers from 1 to n using lambda.
    >>> sum_to_n_lambda7(30)
    465
    >>> sum_to_n_lambda7(100)
    5050
    >>> sum_to_n_lambda7(5)
    15
    >>> sum_to_n_lambda7(10)
    55
    >>> sum_to_n_lambda7(1)
    1
    """
    return lambda x: x + sum_to_n_lambda7(x-1) if x > 0 else 0


def sum_to_n_lambda8(n: int):
    """sum_to_n_lambda8 is a function that sums numbers from 1 to n using lambda.
    >>> sum_to_n_lambda8(30)
    465
    >>> sum_to_n_lambda8(100)
    5050
    >>> sum_to_n_lambda8(5)
    15
    >>> sum_to_n_lambda8(10)
    55
    >>> sum_to_n_lambda8(1)
    1
    """
    return lambda x: x + sum_to_n_lambda8(x-1) if x > 0 else 0
    """
