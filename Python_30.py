

def get_positive(l: list):
    """Return only positive numbers in the list.
    >>> get_positive([-1, 2, -4, 5, 6])
    [2, 5, 6]
    >>> get_positive([5, 3, -5, 2, -3, 3, 9, 0, 123, 1, -10])
    [5, 3, 2, 3, 9, 123, 1]


def get_even(l: list):
    """Return only even numbers in the list.
    >>> get_even([-1, 2, -4, 5, 6])
    [2, -4, 6]
    >>> get_even([5, 3, -5, 2, -3, 3, 9, 0, 123, 1, -10])
    [2, 0, -10]
    """


def get_odd(l: list):
    """Return only odd numbers in the list.
    >>> get_odd([-1, 2, -4, 5, 6])
    [-1, 5]
    >>> get_odd([5, 3, -5, 2, -3, 3, 9, 0, 123, 1, -10])
    [5, 3, -5, -3, 3, 9, 123, 1]
    """


def get_divisible_by_5(l: list):
    """Return only numbers divisible by 5 in the list.
    >>> get_divisible_by_5([-1, 2, -4, 5, 6])
    [5]
    >>> get_divisible_by_5([5, 3, -5, 2, -3, 3, 9, 0, 123, 1, -10])
    [5, -5, 0, 123]
    """


def get_divisible_by_3(l: list):
    """Return only numbers divisible by 3 in the list.
    >>> get_divisible_by_3([-1, 2, -4, 5, 6])
    [6]
    >>> get_divisible_by_3([5, 3, -5, 2, -3, 3, 9, 0, 123, 1, -10])
    [3, -3, 9, 123]
    """


def get_divisible_by_n(l: list, n: int):
    """Return only numbers divisible by n in the list.
    >>> get_divisible_by_n([-1, 2, -4, 5, 6], 2)
    [2, -4, 6]
    >>> get_divisible_by_n([5, 3, -5, 2, -3, 3, 9, 0, 123, 1, -10], 5)
    [5, -5, 0, 123]
    >>> get_divisible_by_n([-1, 2, -4, 5, 6], 3)
    [6]
    >>> get_divisible_by_n([5, 3, -5, 2, -3, 3, 9, 0, 123, 1, -10], 3)
    [3, -3, 9, 123]
    """


def get_divisible_by_all(l: list, n: list):
    """Return only numbers divisible by all numbers in the list n.
    >>> get_divisible_by_all([-1, 2, -4, 5, 6], [2, 3])
    [6]
    >>> get_divisible_by_all([5, 3, -5, 2, -3, 3, 9, 0, 123, 1, -10], [3, 5])
    [5, -5, 0, 123]
    >>> get_divisible_by_all([-1, 2, -4, 5, 6], [3, 5])
    []
    >>> get_divisible_by_all([5, 3, -5, 2, -3, 3, 9, 0, 123, 1, -10], [3, 5])
    [5, -5, 0, 123]
    """


def get_divisible_by_any(l: list, n: list):
    """Return only numbers divisible by any number in the list n.
    >>> get_divisible_by_any([-1, 2, -4, 5, 6], [2, 3])
    [2, -4, 5, 6]
    >>> get_divisible_by_any([5, 3, -5, 2, -3, 3, 9, 0, 123, 1, -10], [3, 5])
    [5, 3, -5, -3, 3, 9, 0, 123]
    >>> get_divisible_by_any([-1, 2, -4, 5, 6], [4, 7])
    [-4]
    >>> get_divisible_by_any([5, 3, -5, 2, -3, 3, 9, 0, 123, 1, -10], [4, 7])
    [5, 3, -5, 2, -3, 3, 9, 0, 123, 1, -10]
    """


def get_divisible_by_all_but_one(l: list, n: list):
    """Return only numbers divisible by all numbers in the list n but not by the last number in the list n.
    >>> get_divisible_by_all_but_one([-1, 2, -4, 5, 6], [2, 3, 5])
    [2, -4]
    >>> get_divisible_by_all_but_one([5, 3, -5, 2, -3, 3, 9, 0, 123, 1, -10], [3, 5, 7])
    [5, -5, 0, 123]
    >>> get_divisible_by_all_but_one([-1, 2, -4, 5, 6], [4, 7, 3])
    [-4]
    >>> get_divisible_by_all_but_one([5, 3, -5, 2, -3, 3, 9, 0, 123, 1, -10], [4, 7, 5])
    [3, -3, 9, 123]
    """


def get_divisible_by_any_but_one(l: list, n: list):
    """Return only numbers divisible by any number in the list n but not by the last number in the list n.
    >>> get_divisible_by_any_but_one([-1, 2, -4, 5, 6], [2, 3, 5])
    [2, -4, 6]
    >>> get_divisible_by_any_but_one([5, 3, -5, 2, -3, 3, 9, 0, 123, 1, -10], [3, 5, 7])
    [5, 3, -5, -3, 3, 9, 0, 123, 1, -10]
    >>> get_divisible_by_any_but_one([-1, 2, -4, 5, 6], [4, 7, 3])
    [-1, 2, -4, 5, 6]
    >>> get_divisible_by_any_but_one([5, 3, -5, 2, -3, 3, 9, 0, 123, 1, -10], [4, 7, 5])
    [3, -3, 9, 123, 1, -10]
    """
    """
