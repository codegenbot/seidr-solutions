def get_row(lst, x):
    result = [
        (i, j)
        for i, sublst in enumerate(lst)
        if any(y == x for y in sublst)
        for j, val in reversed(list(enumerate(sublst)))
        if val == x
    ]
    return sorted(result)