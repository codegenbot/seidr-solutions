def get_row(lst, x):
    result = [
        (i, j)
        for i, sublst in enumerate(lst)
        if any([y == x for y in sublst])
        for j, y in enumerate(reversed(sublst))
        if y == x
    ]
    return sorted(result)