

def common(l1: list, l2: list):
    """Return sorted unique common elements for two lists.
    >>> common([1, 4, 3, 34, 653, 2, 5], [5, 7, 1, 5, 9, 653, 121])
    [1, 5, 653]
    >>> common([5, 3, 2, 8], [3, 2])
    l1.sort()
    l2.sort()
    i = 0
    j = 0
    common = []
    while i < len(l1) and j < len(l2):
        if l1[i] == l2[j]:
            common.append(l1[i])
            i += 1
            j += 1
        elif l1[i] < l2[j]:
            i += 1
        else:
            j += 1
    return common
    [2, 3]

    """
