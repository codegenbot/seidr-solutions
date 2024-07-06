```
def sum_squares(lst):
    total = 0
    for i in range(len(lst)):
        if (i+1) % 3 == 0 and (i+1) % 4 != 0:
            total += lst[i] ** 2
        elif (i+1) % 4 == 0 and (i+1) % 3 != 0:
            total += lst[i] ** 3
    return total