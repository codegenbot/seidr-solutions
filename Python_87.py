def get_row(lst, x):
    result = [
        (i, j)
        for i, row in enumerate(lst)
        if any(val == x for val in row)
        for j, val in reversed(list(enumerate(row)))
        if val == x
    ]
    return sorted(result)