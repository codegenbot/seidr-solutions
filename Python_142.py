```
def sum_squares(lst):
    total = 0
    for i in range(len(lst)):
        if i % 6 == 3:
            total += lst[i] ** 2
        elif i % 6 == 4:
            total += lst[i] ** 3
    return total