

def get_positive(l: list):
    """Return only positive numbers in the list.
    >>> get_positive([-1, 2, -4, 5, 6])
    [2, 5, 6]
    >>> get_positive([5, 3, -5, 2, -3, 3, 9, 0, 123, 1, -10])
    [5, 3, 2, 3, 9, 123, 1]
    return [i for i in l if i > 0]


def get_even(l: list):
    """Return only even numbers in the list.
    >>> get_even([-1, 2, -4, 5, 6])
    [2, -4, 6]
    >>> get_even([5, 3, -5, 2, -3, 3, 9, 0, 123, 1, -10])
    [2, 0, -10]
    """
    return [i for i in l if i % 2 == 0]


def get_odd(l: list):
    """Return only odd numbers in the list.
    >>> get_odd([-1, 2, -4, 5, 6])
    [-1, 5]
    >>> get_odd([5, 3, -5, 2, -3, 3, 9, 0, 123, 1, -10])
    [5, 3, -5, -3, 3, 9, 123, 1]
    """
    return [i for i in l if i % 2 == 1]


def get_divisible_by_n(l: list, n: int):
    """Return only numbers that are divisible by n in the list.
    >>> get_divisible_by_n([-1, 2, -4, 5, 6], 2)
    [2, -4, 6]
    >>> get_divisible_by_n([5, 3, -5, 2, -3, 3, 9, 0, 123, 1, -10], 3)
    [-3, 3, 9, 123]
    """
    return [i for i in l if i % n == 0]


def get_divisible_by_n_v2(l: list, n: int):
    """Return only numbers that are divisible by n in the list.
    >>> get_divisible_by_n_v2([-1, 2, -4, 5, 6], 2)
    [2, -4, 6]
    >>> get_divisible_by_n_v2([5, 3, -5, 2, -3, 3, 9, 0, 123, 1, -10], 3)
    [-3, 3, 9, 123]
    """
    return [i for i in l if not i % n]


def get_divisible_by_n_v3(l: list, n: int):
    """Return only numbers that are divisible by n in the list.
    >>> get_divisible_by_n_v3([-1, 2, -4, 5, 6], 2)
    [2, -4, 6]
    >>> get_divisible_by_n_v3([5, 3, -5, 2, -3, 3, 9, 0, 123, 1, -10], 3)
    [-3, 3, 9, 123]
    """
    return [i for i in l if not i % n]


def get_divisible_by_n_v4(l: list, n: int):
    """Return only numbers that are divisible by n in the list.
    >>> get_divisible_by_n_v4([-1, 2, -4, 5, 6], 2)
    [2, -4, 6]
    >>> get_divisible_by_n_v4([5, 3, -5, 2, -3, 3, 9, 0, 123, 1, -10], 3)
    [-3, 3, 9, 123]
    """
    return [i for i in l if i % n == 0]


def get_divisible_by_n_v5(l: list, n: int):
    """Return only numbers that are divisible by n in the list.
    >>> get_divisible_by_n_v5([-1, 2, -4, 5, 6], 2)
    [2, -4, 6]
    >>> get_divisible_by_n_v5([5, 3, -5, 2, -3, 3, 9, 0, 123, 1, -10], 3)
    [-3, 3, 9, 123]
    """
    return [i for i in l if i % n == 0]


def get_divisible_by_n_v6(l: list, n: int):
    """Return only numbers that are divisible by n in the list.
    >>> get_divisible_by_n_v6([-1, 2, -4, 5, 6], 2)
    [2, -4, 6]
    >>> get_divisible_by_n_v6([5, 3, -5, 2, -3, 3, 9, 0, 123, 1, -10], 3)
    [-3, 3, 9, 123]
    """
    return [i for i in l if i % n == 0]


def get_divisible_by_n_v7(l: list, n: int):
    """Return only numbers that are divisible by n in the list.
    >>> get_divisible_by_n_v7([-1, 2, -4, 5, 6], 2)
    [2, -4, 6]
    >>> get_divisible_by_n_v7([5, 3, -5, 2, -3, 3, 9, 0, 123, 1, -10], 3)
    [-3, 3, 9, 123]
    """
    return [i for i in l if i % n == 0]


def get_divisible_by_n_v8(l: list, n: int):
    """Return only numbers that are divisible by n in the list.
    >>> get_divisible_by_n_v8([-1, 2, -4, 5, 6], 2)
    [2, -4, 6]
    >>> get_divisible_by_n_v8([5, 3, -5, 2, -3, 3, 9, 0, 123, 1, -10], 3)
    [-3, 3, 9, 123]
    """
    return [i for i in l if i % n == 0]


def get_divisible_by_n_v9(l: list, n: int):
    """Return only numbers that are divisible by n in the list.
    >>> get_divisible_by_n_v9([-1, 2, -4, 5, 6], 2)
    [2, -4, 6]
    >>> get_divisible_by_n_v9([5, 3, -5, 2, -3, 3, 9, 0, 123, 1, -10], 3)
    [-3, 3, 9, 123]
    """
    return [i for i in l if i % n == 0]
    """
