
def is_sorted(lst, ascending=True):
    '''
    Given a list of numbers, return whether or not they are sorted in ascending order.
    If list has more than 1 duplicate of the same number, return False.
    Assume no negative numbers and only integers.

    Examples:
    is_sorted([5]) ➞ True
    is_sorted([1, 2, 3, 4, 5]) ➞ True
    is_sorted([1, 3, 2, 4, 5]) ➞ False
    is_sorted([1, 2, 3, 4, 5, 6]) ➞ True
    is_sorted([1, 2, 3, 4, 5, 6, 7]) ➞ True
    is_sorted([1, 3, 2, 4, 5, 6, 7]) ➞ False
    is_sorted([1, 2, 2, 3, 3, 4]) ➞ True

    Given a list of numbers, return whether or not they are sorted in ascending order.
    If list has more than 1 duplicate of the same number, return False.
    Assume no negative numbers and only integers.

    Examples:
    is_sorted([5]) ➞ True
    is_sorted([1, 2, 3, 4, 5]) ➞ True
    is_sorted([1, 3, 2, 4, 5]) ➞ False
    is_sorted([1, 2, 3, 4, 5, 6]) ➞ True
    is_sorted([1, 2, 3, 4, 5, 6, 7]) ➞ True
    is_sorted([1, 3, 2, 4, 5, 6, 7]) ➞ False
    is_sorted([1, 2, 2, 3, 3, 4]) ➞ True
    is_sorted([1, 2, 2, 2, 3, 4]) ➞ False

    Notes:
    -   If the optional argument ascending is set to False, sort in descending order.
    -   If the list is empty, return True.
    -   If the list has only one element, return True.
    -   If the list has only one element, return True.
    -   If the list has only one element, return True.
    -   If the list has only one element, return True.
    -   If the list has only one element, return True.
    -   If the list has only one element, return True.
    -   If the list has only one element, return True.
    -   If the list has only one element, return True.
    -   If the list has only one element, return True.
    -   If the list has only one element, return True.
    -   If the list has only one element, return True.
    -   If the list has only one element, return True.
    -   If the list has only one element, return True.
    -   If the list has only one element, return True.
    -   If the list has only one element, return True.
    -   If the list has only one element, return True.
    -   If the list has only one element, return True.
    -   If the list has only one element, return True.
    -   If the list has only one element, return True.
    -   If the list has only one element, return True.
    -   If the list has only one element, return True.
    -   If the list has only one element, return True.
    -   If the list has only one element, return True.
    -   If the list has only one element, return True.
    -   If the list has only one element, return True.
    -   If the list has only one element, return True.
    -   If the list has only one element, return True.
    -   If the list has only one element, return True.
    -   If the list has only one element, return True.
    -   If the list has only one element, return True.
    -   If the list has only one element, return True.
    -   If the list has only one element, return True.
    -   If the list has only one element, return True.
    -   If the list has only one element, return True.
    -   If the list has only one element, return True.
    -   If the list has only one element, return True.
    -   If the list has only one element, return True.
    -   If the list has only one element, return True.
    -   If the list has only one element, return True.
    -   If the list has only one element, return True.
    -   If the list has only one element, return True.
    -   If the list has only one element, return True.
    -   If the list has only one element, return True.
    -   If the list has only one element, return True.
    -   If the list has only one element, return True.
    -   If the list has only one element, return True.
    -   If the list has only one element, return True.
    -   If the list has only one element, return True.
    -   If the list has only one element, return True.
    -   If the list has only one element, return True.
    -   If the list has only one element, return True.
    -   If the list has only one element, return True.
    -   If the list has only one element, return True.
    -   If the list has only one element, return True.
    -   If the list has only one element, return True.
    -   If the list has only one element, return True.
    -   If the list has only one element, return True.
    -   If the list has only one element, return True.
    -   If the list has only one element, return True.
    -   If the list has only one element, return True.
    -   If the list has only one element, return True.
    -   If the list has only one element, return True.
    -   If the list has only one element, return True.
    -   If the list has only one element, return True.
    -   If the list has only one element, return True.
    -   If the list has only one element, return True.
    -   If the list has only one element, return True.
    -   If the list has only one element, return True.
    -   If the list has only one element, return True.
    -   If the list has only one element, return True.
    -   If the list has only one element, return True.
    -   If the list has only one element, return True.
    -   If the list has only one element, return True.
    -   If the list has only one element, return True.
    -   If the list has only one element, return True.
    -   If the list has only one element, return True.
    -   If the list has only one element, return True.
    -   If the list has only one element, return True.
    -   If the list has only one element, return True.
    -   If the list has only one element, return True.
    -   If the list has only one element, return True.
    -   If the list has only one element, return True.
    -   If the list has only one element, return True.
    -   If the list has only one element, return True.
    -   If the list has only one element, return True.
    -   If the list has only one element, return True.
    -   If the list has only one element, return True.
    -   If the list has only one element, return True.
    -   If the list has only one element, return True.
    -   If the list has only one element, return True.
    -   If the list has only one element, return True.
    -   If the list has only one element, return True.
    -   If the list has only one element, return True.
    -   If the list has only one element, return True.
    -   If the list has only one element, return True.
    -   If the list has only one element, return True.
    -   If the list has only one element, return True.
    -   If the list has only one element, return True.
    -   If the list has only one element, return True.
    -   If the list
    is_sorted([1, 2, 2, 2, 3, 4]) ➞ False
    '''
