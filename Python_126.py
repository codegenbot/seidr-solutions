
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
    # check if length of list is 1, if so return true
    # check if list is sorted
    # if sorted, check if there are duplicates
    # if duplicates, return false
    if len(lst) == 1:
        return True
    else:
        if sorted(lst) == lst:
            for i in range(len(lst) - 1):
                if lst[i] == lst[i + 1]:
                    return False
            return True
        else:
            return False


# Test Cases
print(is_sorted([5]))
print(is_sorted([1, 2, 3, 4, 5]))
print(is_sorted([1, 3, 2, 4, 5]))
print(is_sorted([1, 2, 3, 4, 5, 6]))
print(is_sorted([1, 2, 3, 4, 5, 6, 7]))
print(is_sorted([1, 3, 2, 4, 5, 6, 7]))
print(is_sorted([1, 2, 2, 3, 3, 4]))
print(is_sorted([1, 2, 2, 2, 3, 4]))
    '''
