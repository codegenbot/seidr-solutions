def get_row(lst, x):
    result = [
        (i, j) for i in range(len(lst)) for j in range(len(lst[i])) if lst[i][j] == x
    ]
    result.sort(key=lambda x: (x[0], -x[1]))
    return result