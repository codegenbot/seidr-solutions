

def median(l: list):
    """Return median of elements in the list l.
    >>> median([3, 1, 2, 4, 5])
    3
    >>> median([-10, 4, 6, 1000, 10, 20])
    15.0
    sorted_list = sorted(l) # Sort the elements in the list
    list_length = len(l) # Find the length of the list
    if list_length % 2 == 0: # If the list length is even
        return (sorted_list[int(list_length/2)] + sorted_list[int((list_length/2) - 1)])/2 # Return the average of the two middle elements
    else: # If the list length is odd
        return sorted_list[int(list_length/2)] # Return the middle element
    """
