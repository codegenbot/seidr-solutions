

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


def find_max_path(m):
    """
    find_max_path takes a matrix of integers as an input.
    it returns the maximum sum of all numbers in a path from the top left
    to the bottom right of the matrix. a path is a sequence of adjacent
    elements in the matrix. adjacent elements are those whose indices
    differ by at most one in each dimension.
    >>> find_max_path([[1, 2, 3], [4, 5, 6], [7, 8, 9]])
    29
    >>> find_max_path([[1, 2, 3], [4, 5, 6], [7, 8, 9], [10, 11, 12]])
    42
    >>> find_max_path([[1, 2, 3, 4], [5, 6, 7, 8], [9, 10, 11, 12]])
    38
    """
    """
