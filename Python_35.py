

def max_element(l: list):
    """Return maximum element in the list.
    >>> max_element([1, 2, 3])
    3
    >>> max_element([5, 3, -5, 2, -3, 3, 9, 0, 12, 1, -10])
    12
    pass

    if l[0] > l[1]:
        max = l[0]
    else:
        max = l[1]
    for i in range(2, len(l)):
        if max < l[i]:
            max = l[i]
    return max


if __name__ == '__main__':
    l = [int(i) for i in input().split()]
    print(max_element(l))
    """
