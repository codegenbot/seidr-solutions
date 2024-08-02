def get_row(lst, x):
    result = [
        (i, j)
        for i, row in enumerate(lst)
        if x in row
        for j in range(len(row))[::-1]
        if row[j] == x
    ]
    return sorted(result)