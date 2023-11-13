

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
    # COMPLETE THIS CODE
    # HINT: 
    # 1. Use a nested for-loop
    # 2. Use another variable to store the third element
    # 3. If you have three elements, check if they sum to 0
    >>> triples_sum_to_zero([1])
    False
    """
    for i in range(len(l)):
        for j in range(i+1, len(l)):
            for k in range(j+1, len(l)):
                if l[i] + l[j] + l[k] == 0:
                    return True
    return False


def check(f):
    assert f([1, 3, 5, 0]) == False
    assert f([1, 3, -2, 1]) == True
    assert f([1, 2, 3, 7]) == False
    assert f([2, 4, -5, 3, 9, 7]) == True
    assert f([100, 3, 5, -100]) == False


if __name__ == "__main__":
    check(triples_sum_to_zero)
