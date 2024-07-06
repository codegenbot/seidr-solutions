```
def sum_squares(lst):
    total = 0
    for i in range(len(lst)):
        if (i % 3 == 0 and i % 4 != 0) or (i % 2 == 0 and i % 5 == 0):
            total += lst[i] ** 2
    return total