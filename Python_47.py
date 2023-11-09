

def median(l: list):
    """Return median of elements in the list l.
    >>> median([3, 1, 2, 4, 5])
    3
    >>> median([-10, 4, 6, 1000, 10, 20])
    15.0
    >>> median([3, 1, 2, 4, 5])
    3
    >>> median([-10, 4, 6, 1000, 10, 20])
    15.0
    list_length = len(l)
    sorted_list = sorted(l) # sort the list
    if list_length % 2 == 0: # if list length is even
        return (sorted_list[int(list_length/2)] + sorted_list[int((list_length/2) - 1)])/2 # return the average of the two middle elements
    else: # if list length is odd
        return sorted_list[int(list_length/2)] # return the middle element
    """
