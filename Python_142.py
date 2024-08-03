```
def sum_squares(lst):
    total = 0
    for i, num in enumerate(lst):
        if (i+1) % 3 == 0 and (i+1) % 4 != 0:
            total += num ** 2
        elif (i+1) % 4 == 0 and (i+1) % 3 != 0:
            total += num ** 3
    return total