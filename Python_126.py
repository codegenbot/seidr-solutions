
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

    # initialize a boolean variable to keep track of whether the list is sorted
    sorted = True

    # loop through the list
    for i in range(len(lst)):

        # if the list is sorted, check if the current element is less than the next element
        if sorted and i < len(lst) - 1:

            # if the current element is greater than the next element, change sorted to False
            if lst[i] > lst[i + 1]:
                sorted = False

        # if the list is not sorted, check if the current element is greater than the next element
        elif not sorted and i < len(lst) - 1:

            # if the current element is less than the next element, return False
            if lst[i] < lst[i + 1]:
                return False

    # return the value of sorted
    return sorted


def main():
    print(is_sorted([5])) # ➞ True
    print(is_sorted([1, 2, 3, 4, 5])) # ➞ True
    print(is_sorted([1, 3, 2, 4, 5])) # ➞ False
    print(is_sorted([1, 2, 3, 4, 5, 6])) # ➞ True
    print(is_sorted([1, 2, 3, 4, 5, 6, 7])) # ➞ True
    print(is_sorted([1, 3, 2, 4, 5, 6, 7])) # ➞ False
    print(is_sorted([1, 2, 2, 3, 3, 4])) # ➞ True
    print(is_sorted([1, 2, 2, 2, 3, 4])) # ➞ False


if __name__ == '__main__':
    main()
    '''
