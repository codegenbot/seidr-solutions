# Complete the following code given the task description and function signature.

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

    for i in l:
        if i + i in l:
            return True
    return False


def lists_intersect(l1, l2):
    """
    lists_intersect takes two lists of integers as input.
    it returns True if the two lists share at least one element,
    and False otherwise.
    >>> lists_intersect([1, 2, 3], [2, 3, 4])
    True
    >>> lists_intersect([1, 2, 3], [4, 5, 6])
    False
    >>> lists_intersect([1, 2, 3], [])
    False
    >>> lists_intersect([1, 2, 3], [1, 1])
    True
    >>> lists_intersect([1, 2, 3], [1, 2, 3])
    True
    """

    for i in l1:
        for j in l2:
            if i == j:
                return True
    return False


def get_all_sublists(l):
    """
    get_all_sublists takes a list of integers as an input.
    it returns a list of lists, where each list contains a
    sublist of the original list.
    >>> get_all_sublists([1, 2, 3])
    [[], [1], [2], [3], [1, 2], [1, 3], [2, 3], [1, 2, 3]]
    >>> get_all_sublists([])
    [[]]
    >>> get_all_sublists([1, 2])
    [[], [1], [2], [1, 2]]
    >>> get_all_sublists([1])
    [[], [1]]
    """

    sublists = []
    for i in range(len(l)):
        for j in range(i, len(l)):
            sublists.append(l[i:j + 1])
    sublists.append([])
    return sublists
    """
