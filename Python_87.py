def get_row(lst, x):
    result = []
    for i, row in enumerate(lst):
        for j, num in enumerate(row):
            if num == x:
                result.append((i, j))
    result.sort(key=lambda tup: (tup[0], -tup[1]))
    return result