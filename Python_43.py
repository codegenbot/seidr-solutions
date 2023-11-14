

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
    if len(l) <= 1:
        return False
    for i in range(len(l)):
        for j in range(len(l)):
            if l[i] + l[j] == 0 and i != j:
                return True
    return False

def number_of_matching_pairs(l1, l2):
    """
    number_of_matching_pairs takes two lists as input.
    It returns the number of pairs of elements in l1 that are also in l2.
    Each element in l1 is only allowed to count once as a pair, even if it
    appears multiple times in l2.
    >>> number_of_matching_pairs([1, 2, 3, 4], [5, 6, 1, 1, 3])
    2
    >>> number_of_matching_pairs([1, 2, 3, 4], [3, 4, 3, 4])
    2
    >>> number_of_matching_pairs([1, 2, 3, 4], [3, 3, 3])
    1
    >>> number_of_matching_pairs([1, 2, 3, 4], [5, 6, 7, 0])
    0
    >>> number_of_matching_pairs([], [])
    0
    >>> number_of_matching_pairs(['a', 'b', 'c'], ['c', 'b', 'd'])
    2
    >>> number_of_matching_pairs(['a', 'b', 'c'], ['c', 'c', 'c'])
    1
    """
    if len(l1) == 0 or len(l2) == 0:
        return 0
    count = 0
    for i in range(len(l1)):
        if l1[i] in l2:
            count += 1
            l2.remove(l1[i])
    return count

if __name__ == "__main__":
    import doctest
    doctest.testmod()
    """
