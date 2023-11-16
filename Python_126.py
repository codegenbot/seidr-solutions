
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

    # Create a dictionary to count the number of times each number appears in the list.
    # If any number appears more than once, return False.
    number_counts = {}
    for number in lst:
        if number in number_counts:
            return False
        else:
            number_counts[number] = 1

    # Create a dictionary to count the number of times each number appears in the list.
    # If any number appears more than once, return False.
    number_counts = {}
    for number in lst:
        if number in number_counts:
            return False
        else:
            number_counts[number] = 1

    # Check if the list is sorted in ascending order. If so, return True.
    for i in range(len(lst) - 1):
        if lst[i] > lst[i + 1]:
            return False
    return True
    '''
