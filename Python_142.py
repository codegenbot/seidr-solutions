def sum_squares(lst):
    total = 0
    for i in range(len(lst)):
        if i % 3 == 1 and i % 4 == 1:
            total += lst[i] ** 2
        elif i % 4 == 3 and i % 3 == 0:
            total += lst[i] ** 3
    return total