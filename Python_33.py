def sort_third(l: list):
    first = sorted([i for i in l if i % 3 != 0])
    third = sorted([i for i in l if i % 3 == 0])
    return [i for i in first + third if isinstance(i, int)]