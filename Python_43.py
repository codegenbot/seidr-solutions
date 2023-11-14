

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
    for i in range(len(l)):
        for j in range(i + 1, len(l)):
            if l[i] + l[j] == 0:
                return True
        return False

def pairs_sum_to_n(l, n):
    """
    pairs_sum_to_n takes a list of integers and a target integer as an input.
    it returns True if there are two distinct elements in the list that
    sum to n, and False otherwise.
    >>> pairs_sum_to_n([1, 3, 5, 0], 5)
    True
    >>> pairs_sum_to_n([1, 3, -2, 1], 5)
    False
    >>> pairs_sum_to_n([1, 2, 3, 7], 5)
    True
    >>> pairs_sum_to_n([2, 4, -5, 3, 5, 7], 1)
    True
    >>> pairs_sum_to_n([1], 5)
    False
    """
    for i in range(len(l)):
        for j in range(i + 1, len(l)):
            if l[i] + l[j] == n:
                return True
        return False
    """
