def get_row(lst, x):
    coordinates = []
    for i, row in enumerate(lst):
        for j, num in enumerate(row):
            if num == x:
                coordinates.append((i, j))
    coordinates.sort(key=lambda x: (x[0], -x[1]))
    return coordinates