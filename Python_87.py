def get_row(lst, x):
    coordinates = []
    for row_index, row in enumerate(lst):
        for col_index, value in enumerate(row):
            if value == x:
                coordinates.append((row_index, col_index))
    coordinates.sort(key=lambda coord: (coord[0], -coord[1]))
    return coordinates