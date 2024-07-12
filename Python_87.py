def get_row(lst, x):
    result = []
    for i, row in enumerate(lst):
        if x in row:
            for j in range(len(row) - 1, -1, -1):
                if row[j] == x:
                    result.append((i, j))
    return sorted(result)