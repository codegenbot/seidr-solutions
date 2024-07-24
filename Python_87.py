def get_row(lst, x):
    coordinates = [
        (i, j) for i, row in enumerate(lst) for j, val in enumerate(row) if val == x
    ]
    coordinates.sort(key=lambda x: (x[0], -x[1]))
    return coordinates