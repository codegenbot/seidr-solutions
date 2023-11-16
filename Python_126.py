
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
    # Create a list of the unique elements in the list
    unique_lst = []
    for i in lst:
        if i not in unique_lst:
            unique_lst.append(i)

    # Check if the list is sorted
    for i in range(len(unique_lst) - 1):
        if unique_lst[i] > unique_lst[i + 1]:
            return False

    return True


print(is_sorted([1, 2, 2, 3, 3, 4]))
    '''
