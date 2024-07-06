```
def sum_squares(lst):
    total = 0
    for i in range(len(lst)):
        if (i % 3 == 0 and i % 4 != 0) or (i % 4 == 0 and i % 3 != 0):
            total += lst[i] ** ((i % 4 == 0) * 3 + (i % 3 == 0))
    return total