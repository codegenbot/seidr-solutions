

def sort_even(l: list):
    """This function takes a list l and returns a list l' such that
    l' is identical to l in the odd indicies, while its values at the even indicies are equal
    to the values of the even indicies of l, but sorted.
    >>> sort_even([1, 2, 3])
    [1, 2, 3, 4, 5, 6, 3]
    >>> sort_even([5, 6, 3, 4])
    [3, 6, 5, 4]
    >>> sort_even([5, 8, -12, 4, 23, 2, 3, 11, 12, -10])
    [-12, -10, 4, 2, 8, 5, 23, 3, 11, 12]"""
    return [l[i:i + 2] for i in range(0, len(l), 2)]
