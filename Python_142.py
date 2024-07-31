```
def sum_squares(lst):
    total = 0
    for i in range(len(lst)):
        if i % 6 == 0:
            total += lst[i] ** 2
        elif i % 6 == 1:
            total += lst[i] ** 3
        elif i % 6 == 2:
            total += lst[i] ** 4
        elif i % 6 == 3:
            total += lst[i] ** 5
        elif i % 6 == 4:
            total += lst[i] ** 1
        else:
            total += lst[i] ** 0
    return total