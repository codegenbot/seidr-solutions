def get_row(lst, x):
    result = [
        (i, j)
        for i, row in enumerate(lst)
        if any(x in sublist for sublist in row)
        for j in range(len(row) - 1, -1, -1)
        if x in row[j]
    ]
    return sorted(result)