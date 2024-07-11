def get_row(lst, x):
    result = [
        (i, j)
        for i, row in enumerate(lst)
        if any(x in row for row in lst) and (x in row)
        for j in range(len(row) - 1, -1, -1)
    ]
    return sorted(result)