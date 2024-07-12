```
def sum_squares(lst):
    total = 0
    for i in range(len(lst)):
        if i % 3 == 0:
            if i % 4 != 0:
                total += lst[i] ** 3
            else:
                total += lst[i] ** 2
        else:
            total += lst[i]
    return total