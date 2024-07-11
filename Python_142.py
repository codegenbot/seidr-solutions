```
def sum_squares(lst):
    total = 0
    for i, num in enumerate(lst):
        if i % 3 == 0:
            if i % 4 != 0:
                total += num ** 2
            else:
                total += num ** 3
    return total