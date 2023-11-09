

def pairs_sum_to_zero(l):
    """
    pairs_sum_to_zero takes a list of integers as an input.
    it returns True if there are two distinct elements in the list that
    sum to zero, and False otherwise.
    False
    for i in range(len(l)):
        for j in range(i+1, len(l)):
            if l[i] == -l[j]:
                return True
    return False
    """
    for i in range(len(l)):
        for j in range(i+1, len(l)):
            if l[i] == -l[j]:
                return True
    return False


def check(user_function):
    assert user_function([-2, -1, 0, 1, 2]) == True
    assert user_function([-3, 9, -1, 4, 2, 31]) == False
    assert user_function([1, 3, 5, 0]) == False
    assert user_function([1, 3, -2, 1]) == False
    assert user_function([1, 2, 3, 7]) == False
    assert user_function([2, 4, -5, 3, 5, 7]) == True
    assert user_function([1]) == False


if __name__ == "__main__":
    check(pairs_sum_to_zero)
