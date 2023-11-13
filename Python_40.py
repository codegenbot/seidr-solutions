

def triples_sum_to_zero(l: list):
    """
    triples_sum_to_zero takes a list of integers as an input.
    it returns True if there are three distinct elements in the list that
    sum to zero, and False otherwise.

    >>> triples_sum_to_zero([1, 3, 5, 0])
    False
    >>> triples_sum_to_zero([1, 3, -2, 1])
    True
    >>> triples_sum_to_zero([2, 4, -5, 3, 9, 7])
    True
    for i in range(len(l) - 2):
        for j in range(i + 1, len(l) - 1):
            for k in range(j + 1, len(l)):
                if l[i] + l[j] + l[k] == 0:
                    return True
    return False


def triples_sum_to_zero_faster(l: list):
    """
    triples_sum_to_zero_faster takes a list of integers as an input.
    it returns True if there are three distinct elements in the list that
    sum to zero, and False otherwise.
    It is faster than triples_sum_to_zero.

    >>> triples_sum_to_zero_faster([1, 3, 5, 0])
    False
    >>> triples_sum_to_zero_faster([1, 3, -2, 1])
    True
    >>> triples_sum_to_zero_faster([2, 4, -5, 3, 9, 7])
    True
    >>> triples_sum_to_zero_faster([1])
    False
    """
    l.sort()
    for i in range(len(l) - 2):
        j = i + 1
        k = len(l) - 1
        while j < k:
            if l[i] + l[j] + l[k] == 0:
                return True
            if l[i] + l[j] + l[k] < 0:
                j += 1
            else:
                k -= 1
    return False
    >>> triples_sum_to_zero([1])
    False
    """
