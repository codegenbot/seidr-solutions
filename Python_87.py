def get_row(lst, x):
    result = []
    for i, row in enumerate(lst):
        if x in row:
            for j, val in enumerate(reversed(row)):
                if val == x:
                    result.append((i, len(row) - 1 - j))
    return sorted(result)