
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

    # check if list is empty
    if not lst:
        return True

    # check if list has only one element
    if len(lst) == 1:
        return True

    # check if list has more than one element
    if len(lst) > 1:
        # check if first element is less than second element
        if lst[0] < lst[1]:
            # check if list has more than two elements
            if len(lst) > 2:
                # check if first element is less than second element
                if lst[1] < lst[2]:
                    # check if list has more than three elements
                    if len(lst) > 3:
                        # check if second element is less than third element
                        if lst[2] < lst[3]:
                            # check if list has more than four elements
                            if len(lst) > 4:
                                # check if third element is less than fourth element
                                if lst[3] < lst[4]:
                                    # check if list has more than five elements
                                    if len(lst) > 5:
                                        # check if fourth element is less than fifth element
                                        if lst[4] < lst[5]:
                                            # check if list has more than six elements
                                            if len(lst) > 6:
                                                # check if fifth element is less than sixth element
                                                if lst[5] < lst[6]:
                                                    # check if list has more than seven elements
                                                    if len(lst) > 7:
                                                        # check if sixth element is less than seventh element
                                                        if lst[6] < lst[7]:
                                                            return True
                                                        else:
                                                            return False
                                                    else:
                                                        return True
                                                else:
                                                    return False
                                            else:
                                                return True
                                        else:
                                            return False
                                    else:
                                        return True
                                else:
                                    return False
                            else:
                                return True
                        else:
                            return False
                    else:
                        return True
                else:
                    return False
            else:
                return True
        else:
            return False


print(is_sorted([5]))
print(is_sorted([1, 2, 3, 4, 5]))
print(is_sorted([1, 3, 2, 4, 5]))
print(is_sorted([1, 2, 3, 4, 5, 6]))
print(is_sorted([1, 2, 3, 4, 5, 6, 7]))
print(is_sorted([1, 3, 2, 4, 5, 6, 7]))
print(is_sorted([1, 2, 2, 3, 3, 4]))
print(is_sorted([1, 2, 2, 2, 3, 4]))
    '''
