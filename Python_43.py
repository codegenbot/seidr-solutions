def find_index(l, x):
    """
    find_index takes as input a list and an object x.
    It returns the index of x in the list, or None if x is not found in the list.
    >>> find_index([1, 2, 3], 3)
    2
    >>> find_index([1, 2, 4], 3)
    None
    >>> find_index([4, 3, 2, 1], 4)
    0
    >>> find_index([], 3)
    None
    >>> find_index([2, "r", "ED", "b", 2, "a", 3.0], "ED")
    2
    """



def pairs_sum_to_zero(l):
    """
    pairs_sum_to_zero takes a list of integers as an input.
    it returns True if there are two distinct elements in the list that
    sum to zero, and False otherwise.
    >>> pairs_sum_to_zero([1, 3, 5, 0])
    False
    >>> pairs_sum_to_zero([1, 3, -2, 1])
    False
    >>> pairs_sum_to_zero([1, 2, 3, 7])
    False
    >>> pairs_sum_to_zero([2, 4, -5, 3, 5, 7])
    True
    >>> pairs_sum_to_zero([1])
    False
    """
