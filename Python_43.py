

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
    if len(l) == 1:
        return False
    else:
        l.sort()
        i = 0
        j = len(l) - 1
        while i < j:
            if l[i] + l[j] == 0:
                return True
            elif l[i] + l[j] < 0:
                i = i + 1
            else:
                j = j - 1
    return False
    """
