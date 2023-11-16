
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

    # If the list is empty, return True
    if len(lst) == 0:
        return True

    # If the list has only 1 element, return True
    if len(lst) == 1:
        return True

    # If the list has more than 1 element, check if the list is sorted
    for i in range(len(lst) - 1):
        if lst[i] > lst[i+1]:
            return False

    # If the list has more than 1 element and is sorted, check if there are duplicates
    for i in range(len(lst) - 1):
        if lst[i] == lst[i+1]:
            return False

    # If the list has more than 1 element, is sorted, and has no duplicates, return True
    return True


print(is_sorted([5]))
print(is_sorted([1, 2, 3, 4, 5]))
print(is_sorted([1, 3, 2, 4, 5]))
print(is_sorted([1, 2, 3, 4, 5, 6]))
print(is_sorted([1, 2, 3, 4, 5, 6, 7]))
print(is_sorted([1, 3, 2, 4, 5, 6, 7]))
print(is_sorted([1, 2, 2, 3, 3, 4]))
print(is_sorted([1, 2, 2, 2, 3, 4]))
    '''
