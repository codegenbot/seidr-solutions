def get_row(lst, x):
    return [(i, j) for i, row in enumerate(lst) for j, val in sorted(enumerate(row), key=lambda x: x[1], reverse=True) if val == x]