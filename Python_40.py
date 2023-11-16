

def triples_sum_to_zero(l: list):
    """
    triples_sum_to_zero takes a list of integers as an input.
    it returns True if there are three distinct elements in the list that
    sum to zero, and False otherwise.

    >>> triples_sum_to_zero([1, 3, 5, 0])
    False
    >>> triples_sum_to_zero([1, 3, -2, 1])
    True
    >>> triples_sum_to_zero([1, 2, 3, 7])
    False
    >>> triples_sum_to_zero([2, 4, -5, 3, 9, 7])
    True
    if len(l) < 3:
        return False
    else:
        for i in range(len(l)):
            for j in range(len(l)):
                for k in range(len(l)):
                    if i != j and i != k and j != k:
                        if l[i] + l[j] + l[k] == 0:
                            return True
        return False


print(triples_sum_to_zero([1, 3, 5, 0]))
print(triples_sum_to_zero([1, 3, -2, 1]))
print(triples_sum_to_zero([1, 2, 3, 7]))
print(triples_sum_to_zero([2, 4, -5, 3, 9, 7]))
print(triples_sum_to_zero([1]))
    >>> triples_sum_to_zero([1])
    False
    """
