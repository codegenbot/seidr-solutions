

def get_positive(l: list):
    """Return only positive numbers in the list.
    >>> get_positive([-1, 2, -4, 5, 6])
    [2, 5, 6]
    >>> get_positive([5, 3, -5, 2, -3, 3, 9, 0, 123, 1, -10])
    [5, 3, 2, 3, 9, 123, 1]
    positive_numbers = []
    for number in l:
        if number > 0:
            positive_numbers.append(number)
    return positive_numbers


def get_positive_v2(l: list):
    """Return only positive numbers in the list.
    >>> get_positive_v2([-1, 2, -4, 5, 6])
    [2, 5, 6]
    >>> get_positive_v2([5, 3, -5, 2, -3, 3, 9, 0, 123, 1, -10])
    [5, 3, 2, 3, 9, 123, 1]
    """
    return [number for number in l if number > 0]


def get_positive_v3(l: list):
    """Return only positive numbers in the list.
    >>> get_positive_v3([-1, 2, -4, 5, 6])
    [2, 5, 6]
    >>> get_positive_v3([5, 3, -5, 2, -3, 3, 9, 0, 123, 1, -10])
    [5, 3, 2, 3, 9, 123, 1]
    """
    return list(filter(lambda number: number > 0, l))


def get_positive_v4(l: list):
    """Return only positive numbers in the list.
    >>> get_positive_v4([-1, 2, -4, 5, 6])
    [2, 5, 6]
    >>> get_positive_v4([5, 3, -5, 2, -3, 3, 9, 0, 123, 1, -10])
    [5, 3, 2, 3, 9, 123, 1]
    """
    return filter(lambda number: number > 0, l)


def get_positive_v5(l: list):
    """Return only positive numbers in the list.
    >>> get_positive_v5([-1, 2, -4, 5, 6])
    [2, 5, 6]
    >>> get_positive_v5([5, 3, -5, 2, -3, 3, 9, 0, 123, 1, -10])
    [5, 3, 2, 3, 9, 123, 1]
    """
    return list(map(lambda number: number if number > 0 else None, l))


def get_positive_v6(l: list):
    """Return only positive numbers in the list.
    >>> get_positive_v6([-1, 2, -4, 5, 6])
    [2, 5, 6]
    >>> get_positive_v6([5, 3, -5, 2, -3, 3, 9, 0, 123, 1, -10])
    [5, 3, 2, 3, 9, 123, 1]
    """
    return map(lambda number: number if number > 0 else None, l)


def get_positive_v7(l: list):
    """Return only positive numbers in the list.
    >>> get_positive_v7([-1, 2, -4, 5, 6])
    [2, 5, 6]
    >>> get_positive_v7([5, 3, -5, 2, -3, 3, 9, 0, 123, 1, -10])
    [5, 3, 2, 3, 9, 123, 1]
    """
    return [number for number in l if number > 0]


def get_positive_v8(l: list):
    """Return only positive numbers in the list.
    >>> get_positive_v8([-1, 2, -4, 5, 6])
    [2, 5, 6]
    >>> get_positive_v8([5, 3, -5, 2, -3, 3, 9, 0, 123, 1, -10])
    [5, 3, 2, 3, 9, 123, 1]
    """
    return [number for number in l if number > 0]


def get_positive_v9(l: list):
    """Return only positive numbers in the list.
    >>> get_positive_v9([-1, 2, -4, 5, 6])
    [2, 5, 6]
    >>> get_positive_v9([5, 3, -5, 2, -3, 3, 9, 0, 123, 1, -10])
    [5, 3, 2, 3, 9, 123, 1]
    """
    return [number for number in l if number > 0]


def get_positive_v10(l: list):
    """Return only positive numbers in the list.
    >>> get_positive_v10([-1, 2, -4, 5, 6])
    [2, 5, 6]
    >>> get_positive_v10([5, 3, -5, 2, -3, 3, 9, 0, 123, 1, -10])
    [5, 3, 2, 3, 9, 123, 1]
    """
    return [number for number in l if number > 0]


def get_positive_v11(l: list):
    """Return only positive numbers in the list.
    >>> get_positive_v11([-1, 2, -4, 5, 6])
    [2, 5, 6]
    >>> get_positive_v11([5, 3, -5, 2, -3, 3, 9, 0, 123, 1, -10])
    [5, 3, 2, 3, 9, 123, 1]
    """
    return [number for number in l if number > 0]


def get_positive_v12(l: list):
    """Return only positive numbers in the list.
    >>> get_positive_v12([-1, 2, -4, 5, 6])
    [2, 5, 6]
    >>> get_positive_v12([5, 3, -5, 2, -3, 3, 9, 0, 123, 1, -10])
    [5, 3, 2, 3, 9, 123, 1]
    """
    return [number for number in l if number > 0]


def get_positive_v13(l: list):
    """Return only positive numbers in the list.
    >>> get_positive_v13([-1, 2, -4, 5, 6])
    [2, 5, 6]
    >>> get_positive_v13([5, 3, -5, 2, -3, 3, 9, 0, 123, 1, -10])
    [5, 3, 2, 3, 9, 123, 1]
    """
    return [number for number in l if number > 0]


def get_positive_v14(l: list):
    """Return only positive numbers in the list.
    >>> get_positive_v14([-1, 2, -4, 5, 6])
    [2, 5, 6]
    >>> get_positive_v14([5, 3, -5, 2, -3, 3, 9, 0, 123, 1, -10])
    [5, 3, 2, 3, 9, 123, 1]
    """
    return [number for number in l if number > 0]


def get_positive_v15(l: list):
    """Return only positive numbers in the list.
    >>> get_positive_v15([-1, 2, -4, 5, 6])
    [2, 5, 6]
    >>> get_positive_v15([5, 3, -5, 2, -3, 3, 9, 0, 123, 1, -10])
    [5, 3, 2, 3, 9, 123, 1]
    """
    return [number for number in l if number > 0]


def get_positive_v16(l: list):
    """Return only positive numbers in the list.
    >>> get_positive_v16([-1, 2, -4, 5, 6])
    [2, 5, 6]
    >>> get_positive_v16([5, 3, -5
    """
