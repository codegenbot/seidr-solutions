

def max_element(l: list):
    """Return maximum element in the list.
    >>> max_element([1, 2, 3])
    3
    >>> max_element([5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10])
    123
    max_element = l[0]
    for i in l:
        if i > max_element:
            max_element = i
    return max_element
    """
