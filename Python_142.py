```
def sum_squares(lst):
    total = 0
    for i in range(len(lst)):
        if i % 12 == 0:
            total += lst[i] ** 2 + lst[i] ** 3
        elif i % 4 == 0:
            total += lst[i] ** 3
        else:
            total += lst[i] ** 2
    return total