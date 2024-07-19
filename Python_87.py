def get_row(lst, x):
    result = [
        (i, j)
        for i, sublst in enumerate(lst)
        if x in sublst
        for j in range(len(sublst) - 1, -1, -1)
        if sublst[j] == x
    ]
    return sorted(result)