Here is the solution:

def get_row(lst, x):
    result = []
    for i, row in enumerate(lst):
        if x in row:
            for j, val in reversed(list(enumerate(row))):
                if val == x:
                    result.append((i, j))
    return sorted(result)