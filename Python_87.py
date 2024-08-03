def get_row(lst, x):
    result = [
        (i, j)
        for i, sublst in enumerate(lst)
        for j, val in enumerate(sublst)
        if val == x
    ]
    result.sort(key=lambda x: (x[0], -x[1]))
    return result