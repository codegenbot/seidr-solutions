#
def is_sorted(lst):
    '''
    Given a list of numbers, return whether or not they are sorted
    in ascending order. If list has more than 1 duplicate of the same
    number, return False. Assume no negative numbers and only integers.

    Examples
    is_sorted([5]) ➞ True
    is_sorted([1, 2, 3, 4, 5]) ➞ True
    is_sorted([1, 3, 2, 4, 5]) ➞ False
    is_sorted([1, 2, 3, 4, 5, 6]) ➞ True
    is_sorted([1, 2, 3, 4, 5, 6, 7]) ➞ True
    is_sorted([1, 3, 2, 4, 5, 6, 7]) ➞ False
    is_sorted([1, 2, 2, 3, 3, 4]) ➞ True
    is_sorted([1, 2, 2, 2, 3, 4]) ➞ False

    for i in range(len(lst) - 1):
        if lst[i] >= lst[i + 1]:
            return False
    return True

print(is_sorted([1, 2, 2, 2, 3, 4]))
print(is_sorted([1, 2, 2, 3, 3, 4]))
    '''

def check(func):
    assert func([1, 2, 3, 4]) == True
    assert func([1, 2, 3, 4, 5]) == True
    assert func([1, 2, 3, 4, 5, 6]) == True
    assert func([1, 2, 3, 4, 5, 6, 7]) == True
    assert func([1, 3, 2, 4, 5, 6, 7]) == False
    assert func([1, 2, 2, 3, 3, 4]) == True
    assert func([1, 2, 2, 2, 3, 4]) == False
    assert func([1]) == True
    assert func([2, 1]) == False
    assert func([2, 2, 1]) == False
    assert func([2, 2, 2, 1]) == False
    assert func([2, 2, 2, 2, 1]) == False
    assert func([2, 2, 2, 2, 2, 1]) == False
    assert func([3, 2, 1]) == False
    assert func([3, 2, 2, 1]) == False
    assert func([3, 2, 2, 2, 1]) == False
    assert func([3, 2, 2, 2, 2, 1]) == False
    assert func([3, 2, 2, 2, 2, 2, 1]) == False
    assert func([3, 3, 2, 2, 1]) == False
    assert func([3, 3, 2, 2, 2, 1]) == False
    assert func([3, 3, 2, 2, 2, 2, 1]) == False
    assert func([3, 3, 2, 2, 2, 2, 2, 1]) == False
    assert func([3, 3, 3, 2, 2, 2, 1]) == False
    assert func([3, 3, 3, 2, 2, 2, 2, 1]) == False
    assert func([3, 3, 3, 2, 2, 2, 2, 2, 1]) == False
    assert func([3, 3, 3, 3, 2, 2, 2, 2, 1]) == False
    assert func([3, 3, 3, 3, 2, 2, 2, 2, 2, 1]) == False
    assert func([3, 3, 3, 3, 3, 2, 2, 2, 2, 1]) == False
    assert func([3, 3, 3, 3, 3, 2, 2, 2, 2, 2, 1]) == False
    assert func([3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 1]) == False
    assert func([3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 2, 1]) == False
    assert func([3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 1]) == False
    assert func([3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 2, 1]) == False
    assert func([3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 1]) == False
    assert func([3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 2, 1]) == False
    assert func([3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 1]) == False
    assert func([3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 2, 1]) == False
    assert func([3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 1]) == False
    assert func([3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 2, 1]) == False
    assert func([3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 1]) == False
    assert func([3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 2, 1]) == False
    assert func([3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 1]) == False
    assert func([3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 2, 1]) == False
    assert func([3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 1]) == False
    assert func([3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 2, 1]) == False
    assert func([3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 1]) == False
    assert func([3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 2, 1]) == False
    assert func([3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 1]) == False
    assert func([3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 2, 1]) == False
    assert func([3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 1]) == False
    assert func([3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 2, 1]) == False
    assert func([3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 1]) == False
    assert func([3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 2, 1]) == False
    assert func([3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 1]) == False
    assert func([3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 2, 1]) == False
    print("This prints if this assert fails")

check(is_sorted)
