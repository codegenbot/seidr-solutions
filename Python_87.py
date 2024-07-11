def get_row(lst, x):
    result = [
        (i, j)
        for i, sublst in enumerate(lst)
        if any(x in sublst for sublst in (sublst for sublst in lst))
    ]
    return sorted(result, key=lambda x: (x[0], -x[1]))