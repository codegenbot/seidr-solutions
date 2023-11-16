

def sort_even(l: list):
    """This function takes a list l and returns a list l' such that
    l' is identical to l in the odd indicies, while its values at the even indicies are equal
    to the values of the even indicies of l, but sorted.
    >>> sort_even([5, 8, -12, 4, 23, 2, 3, 11, 12, -10])
    [5, -12, 8, 2, 23, 4, 3, 11, -10, 12]
    >>> sort_even([5, 6, 3, 4, -3, -2, -1, 0])
    [5, -3, 6, -2, 3, -1, 4, 0]"""
    for i in range(0, len(l), 2):
        l[i] = sorted(l[i])
    return l
