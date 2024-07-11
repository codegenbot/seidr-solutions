def get_row(lst, x):
    result = [
        (i, j)
        for i, sublst in enumerate(lst)
        for j in range(len(sublst) - 1, -1, -1)
        if x in sublst
    ]
    return sorted(result, key=lambda x: (x[0], len(lst[x[0]]) - 1 - x[1]))