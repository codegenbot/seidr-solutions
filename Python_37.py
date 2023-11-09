

def sort_even(l: list):
    for i in range(1, len(l), 2):
        for j in range(0, len(l) - i, 2):
            if l[j] > l[j + 2]:
                l[j], l[j + 2] = l[j + 2], l[j]
    return l
    """
