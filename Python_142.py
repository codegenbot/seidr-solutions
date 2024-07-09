def sum_squares(lst):
    total = 0
    for i in range(len(lst)):
        if i % 12 == 0:
            total += lst[i] ** 2
        else:
            total += lst[i] ** (i % 3 + 1)
    return total