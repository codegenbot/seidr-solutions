def get_row(lst, x):
    return [(i, j) for i, row in enumerate(lst) for j, num in enumerate(row) if num == x]