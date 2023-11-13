

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
        for j in range(i+1, len(l)):
            if l[i] + l[j] == 0:
                return True
    return False


def pairs_sum_to_k(l, k):
    """
    pairs_sum_to_k takes a list of integers and a number k as an input.
    it returns True if there are two distinct elements in the list that
    sum to k, and False otherwise.
    >>> pairs_sum_to_k([1, 3, 5, 0], 5)
    False
    >>> pairs_sum_to_k([1, 3, -2, 1], 1)
    True
    >>> pairs_sum_to_k([1, 2, 3, 7], 4)
    True
    >>> pairs_sum_to_k([2, 4, -5, 3, 5, 7], 1)
    False
    >>> pairs_sum_to_k([1], 1)
    False
    """
    for i in range(len(l)):
        for j in range(i+1, len(l)):
            if l[i] + l[j] == k:
                return True
    return False
    """
